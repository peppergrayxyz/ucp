import re

def proc(src):
    pattern = re.compile('https:\/\/www\.unicode\.org\/versions\/Unicode([^\/]+)\/')
    version = re.findall(pattern, src)[0]

    return version
