
import re
import io
import textwrap

def proc(src):
    
    name = 'ucGraphemeBreakProperty'
    h = io.StringIO()
    c = io.StringIO()

    print(' process ' + name)

    resolveGbpLabel = {
        'Other'             : 'XX',
        'Control'           : 'CTR',
        'CR'                : 'CR',
        'LF'                : 'LF',
        'Prepend'           : 'PP',
        'Extend'            : 'EX',
        'Regional_Indicator': 'RI',
        'SpacingMark'       : 'SM',
        'L'                 : 'L',
        'V'                 : 'V',
        'T'                 : 'T',
        'LV'                : 'LV',
        'LVT'               : 'LVT',
        'ZWJ'               : 'ZWJ',
    }
            
    numLinesProcessed = dict()
    numLines = dict()
    
    label = ''
    phase = 1
    rules = dict()
    rules[0] = dict()
    rules[1] = dict()
    rules[2] = dict()
    rules[3] = dict()

    for line in src.splitlines():

        # 1. look for # @missing: 0000..10FFFF; Other
        if phase == 1:
            missing = re.findall('^# @missing:\s+?(.*?)$', line)
            if missing:
                assert(missing[0] == '0000..10FFFF; Other')
                phase = 2

        # 2. parse data
        if phase == 2:
            
            lines = re.findall('^# Total code points: (\d+)', line)
            if lines:
                numLines[label] = int(lines[0])
                assert(numLines[label] == numLinesProcessed[label])

            data = re.findall('^([^#]\w+)[\.]*?(\w+)?\s*?;\s*(\w+)', line)
            if data:
                a = int(data[0][0], 16)
                b = int(data[0][1], 16) if data[0][1] else a
                
                vl = data[0][2]
                label = vl
                if vl in resolveGbpLabel:
                    label = resolveGbpLabel[vl]
                else:
                    print("[" + __file__ + "][warning] unknown label " + vl)
                    resolveGbpLabel[vl] = vl

                for i in range (a, b + 1):
                    if i < 0x80:
                        j = 0
                    elif i < 0x800:
                        j = 1
                    elif i < 0x10000:
                        j = 2
                    else:
                        j = 3

                    rules[j][i] = label

                    numLinesProcessed[label] = numLinesProcessed[label] + 1 if label in numLinesProcessed else 1
 
    c.write(textwrap.dedent('''\

    /* THIS FILE IS GENERATED */

    #include "%s.h"
    #include "../byteorder.h"
		
    /* <ucd> */

    ''' % (name)))

    for i in range(0,4):
        oRules = sorted(rules[i].keys())
        
        c.write(textwrap.dedent('''\

        %sType_t %s_get%d(ucp8chr_t chr)
        {
            switch(chr.cp32)
            {\
        ''' % (name, name, i)))
        
        for cp in oRules:
            vl = rules[i][cp]
                            
            str1 = '        case BO_CTUTF8(' + "0x%0.2X" % cp + ')'
            c.write('\n' + str1.ljust(25 + i) + ': return UCGBP_' + vl + ';')

        c.write(textwrap.dedent('''
                default%s: return UCGBP_XX;
            }
        }

        ''' % (' ' * (10+i))))

    c.write(textwrap.dedent('''\

    %sType_t %s_get(ucp8chr_t chr)
    {
        if(chr.cp[0] < 0xC0) return %s_get0(chr);
        if(chr.cp[0] < 0xE0) return %s_get1(chr);
        if(chr.cp[0] < 0xF0) return %s_get2(chr);
        else                 return %s_get3(chr);
    }
	
    /* </ucd> */
	
    ''' % (name, name, name, name, name, name)))

    h.write(textwrap.dedent('''\
    #pragma once
	
    /* THIS FILE IS GENERATED */
    
    #ifndef UCP_%s
    #define UCP_%s

    #include "../ucCodepoint/ucCodepoint.h"

    /* <ucd> */

    typedef enum %sType
    {
    ''' % (name.upper(), name.upper(), name)))

    for gcb in resolveGbpLabel.items():
        h.write('    UCGBP_' + gcb[1].ljust(3) + ', /* ' + gcb[0] + " */\n")

    h.write(textwrap.dedent('''\
    } %sType_t;

    %sType_t %s_get(ucp8chr_t chr);
	
    /* </ucd> */

    #endif	
    ''' % (name, name, name)))

    return {'h': h.getvalue(), 'c': c.getvalue()}
