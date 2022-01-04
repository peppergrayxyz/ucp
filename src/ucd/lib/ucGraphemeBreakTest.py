
import re
import io
import textwrap

def proc(src):

    name = 'ucGraphemeBreakTest'
    h = io.StringIO()

    print(' process ' + name)

    numLinesProcessed = 0
    numLines = -1

    h.write(textwrap.dedent('''\
    #pragma once
		
    /* THIS FILE IS GENERATED */
        
    #ifndef UCP_%s
    #define UCP_%s
        
    typedef struct %sCase {
        const unsigned char* title;
        const unsigned char* input;
        const unsigned char output[16][22];
    } %sCase;
        
    %sCase %sCases[] =
    {
    ''' % (name.upper(), name.upper(), name, name, name, name)))

    first1 = True
    for line in src.splitlines():
        
        lines = re.findall('^# Lines: (\d+)', line)
        if lines:
            numLines = int(lines[0])

        # ignore breaking at start at end
        data = re.findall('^[^#]\s+?(.*?)\s+?÷\s+?#(.*?)$', line)
        if data:
            if first1:
                first1 = False
            else:
                h.write(',\n')

            title = data[0][1]
            title = title.replace('÷','-')
            title = title.replace('×','+')
            h.write('    {\n        "' + title + '",\n')

            res = re.split(' ', data[0][0])

            input  = '        "'
            output = '        { "'

            for r in res:
                if r == '÷' or r == '×':
                    if r == '÷':
                        output = output + '", "'
                else:
                    cp = chr(int(r, 16)).encode('utf-8')
                    s   = ("{}".format(''.join('\\x{:02x}'.format(b) for b in cp)))
                    input  += s
                    output += s
                    
            input  += '",\n'
            output += '" }\n'
            
            h.write(input + output + '    }')

            numLinesProcessed += 1
            
    h.write('\n};\n\n#endif\n')

    assert(numLinesProcessed == numLines)

    return {'h': h.getvalue(), 'c': None}
