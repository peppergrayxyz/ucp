
import re
import io
import textwrap
import hashlib

def proc(src):

    name = 'ucGraphemeClusterBoundary'
    hImp = '82b64633eb08fd0b1a88ced86fdc6eee55a5db536ed8fc9753ef5d9dff3331f4'
    h = io.StringIO()
    x = io.StringIO()

    print(' process ' + name)

    reRuleBlock = re.compile('#rules(.*?)<h3>', re.S)
    ruleBlock   = re.findall(reRuleBlock, src)
    
    assert len(ruleBlock) == 1
    assert len(ruleBlock[0]) > 0

    reRuleRows = re.compile('<tr>.*?<a.*?>(.*?)<\/a><\/th><td.*?>(.*?)<\/td><td>(.*?)<\/td><td>(.*?)<\/td>')
    ruleRows   = re.findall(reRuleRows, ruleBlock[0])

    assert len(ruleRows) > 1

    h.write(textwrap.dedent('''\
    #pragma once
		
    /* THIS FILE IS GENERATED */
        
    #ifndef UCP_%s
    #define UCP_%s
	
    /* <ucd> */
    
	''' % (name.upper(), name.upper())))

    h.write('/* ' + name + '\n')
    for ruleLine in ruleRows:
        h.write('    ' + ruleLine[0] + ': ' + ruleLine[1] + ' ' + ruleLine[2] + ' ' + ruleLine[3] + '\n')
        x.write(' '.join(ruleLine))
    h.write('*/')

    hRef = hashlib.sha256(x.getvalue().encode('utf-8')).hexdigest()

    h.write(textwrap.dedent('''\
    typedef enum %sState {
        UCGRAPHEMESTATE_UNKNOWN,
        UCGRAPHEMESTATE_REGIONAL,
        UCGRAPHEMESTATE_EMOJI,
    } %sState_t;

    unsigned int %s_get(ucp8chr_t chr1, ucp8chr_t chr2, %sState_t *state);
	
    /* </ucd> */
	
    #endif	
    ''' % (name, name, name, name)))


    if hRef != hImp:
        print("[" + __file__ + "][error] rules have changed (needs to be fixed manually. New hash: " + hRef +").")
        exit(1)

    return {'h': h.getvalue(), 'c': None}