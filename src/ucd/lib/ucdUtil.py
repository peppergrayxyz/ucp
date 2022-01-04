
def cHexEscape(num):
    return "\\U%0.8X" % num

def utf8escape(cp):
    if cp <= 0x7F:       str = cHexEscape(cp)
    elif cp <= 0x07FF:   str =  cHexEscape(((cp >>  6) & 0x1F) | 0xC0) + cHexEscape(((cp >>  0) & 0x3F) | 0x80)
    elif cp <= 0xFFFF:   str =  cHexEscape(((cp >> 12) & 0x0F) | 0xE0) + cHexEscape(((cp >>  6) & 0x3F) | 0x80) + cHexEscape(((cp >>  0) & 0x3F) | 0x80)
    elif cp <= 0x10FFFF: str =  cHexEscape(((cp >> 18) & 0x07) | 0xF0) + cHexEscape(((cp >> 12) & 0x3F) | 0x80) + cHexEscape(((cp >>  6) & 0x3F) | 0x80) + cHexEscape(((cp >>  0) & 0x3F) | 0x80)

    return str.replace('0x','')
