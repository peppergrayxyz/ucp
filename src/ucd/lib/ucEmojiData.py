
import re
import filecmp
import textwrap
import collections
import sys
import io


def proc(src):

    name = 'ucEmojiData'
    h = io.StringIO()
    c = io.StringIO()

    print(' process ' + name)
            
    resolveLabel = {
        'Emoji'                 : 'Emoji',
        'Emoji_Presentation'    : 'EmojiPresentation',
        'Emoji_Modifier'        : 'EmojiModifier',
        'Emoji_Modifier_Base'   : 'EmojiModifierBase',
        'Emoji_Component'       : 'EmojiComponent',
        'Extended_Pictographic' : 'ExtendedPictographic',
    }

    c.write(textwrap.dedent('''\

    /* THIS FILE IS GENERATED */

    #include "%s.h"
    #include "../byteorder.h"
		
    /* <ucd> */

    ''' % (name)))
    phase = 1
    vl = ''

    for line in src.splitlines():

        # 1. look for # @missing: 0000..10FFFF; Other
        if phase == 1:
            missing = re.findall('^# @missing:.*?;\s+?(.*?)\s+?;', line)
            if missing:
                vl = missing[0];

                if vl in resolveLabel:
                    vl = resolveLabel[vl]
                else:
                    print("[" + __file__ + "][warning] unknown label " + vl, file=sys.stderr)
                    resolveLabel[vl] = vl
                                                
                c.write(textwrap.dedent('''\
    
                unsigned int %s_is%s(ucp8chr_t chr)
                {
                    switch(chr.cp32)
                    {\
                ''' % (name, vl)))

                phase = 2
                continue
            
        # 2. parse data
        if phase == 2:     
            
            next = re.findall('^# Total elements:(.*?)$', line)
            if next:
                phase = 3

            data = re.findall('^([^#]\w+)[\.]*?(\w+)?\s*?;\s*(\w+)', line)    
            if data:
                a = int(data[0][0], 16)
                b = int(data[0][1], 16) if data[0][1] else a
            
                first = True
                for i in range (a, b + 1):
                    str1 = '        case BO_CTUTF8(' + "0x%0.2X" % i + ')'
                    c.write('\n' + str1.ljust(28) + ': ')
        
        if phase == 3:
            c.write('return 1;')
            c.write(textwrap.dedent('''\

                    default             : return 0;
                }
            }
			
            /* </ucd> */

            '''))

            phase = 1
            continue

    h.write(textwrap.dedent('''\
    #pragma once
	
    /* THIS FILE IS GENERATED */
    
    #ifndef UCP_%s
    #define UCP_%s

    #include "../ucCodepoint/ucCodepoint.h"
		
    /* <ucd> */

    ''' % (name.upper(), name.upper())))

    for func in resolveLabel.items():
        h.write('unsigned int ' + name +'_is' + func[1] + '(ucp8chr_t chr);\n')

    h.write(textwrap.dedent('''\

    /* </ucd> */
		
    #endif
    '''))
    
    return {'h': h.getvalue(), 'c': c.getvalue()}