
# https://www.unicode.org/Public/UCD/latest/

import sys
import os.path
import argparse
import textwrap
import urllib.request
import ssl
from pathlib import Path
from lib import ucVersion, ucGraphemeClusterBoundary, ucGraphemeBreakProperty, ucGraphemeBreakTest, ucEmojiData
from pprint import pprint
ssl._create_default_https_context = ssl._create_unverified_context
import io
import re


def downloadSource(sourceDir, inputUrl, file):

    url = inputUrl + file
    dst = sourceDir + file
    print(" fetch " + dst)

    with urllib.request.urlopen(url) as response:
        r = response.read().decode('utf-8')
        Path(os.path.dirname(dst)).mkdir(parents=True, exist_ok=True)
        with open(dst, 'w', encoding="utf-8") as fDst:
            fDst.write(r)

    return r


def ucd(inputUrl, sourceDir, outputDir):
    
    Path(os.path.dirname(sourceDir)).mkdir(parents=True, exist_ok=True)
    Path(os.path.dirname(outputDir)).mkdir(parents=True, exist_ok=True)

    print("\nDownload UCD version:")
    strVersion = downloadSource(sourceDir, inputUrl, 'ReadMe.txt')

    print("\nProcess UCD version:")
    refVersion = ucVersion.proc(strVersion)
    impVersion = '14.0.0-beta'

    print(" current: " + impVersion);
    print(" latest : " + refVersion);
    
    if refVersion == impVersion:
        print("Sources are up2date!")
        return

    print("\nUpdate UCD:")
        
    strEmojiData                = downloadSource(sourceDir, inputUrl, 'ucd/emoji/emoji-data.txt')
    strGraphemeClusterBoundary  = downloadSource(sourceDir, inputUrl, 'ucd/auxiliary/GraphemeBreakTest.html')
    strGraphemeBreakProperty    = downloadSource(sourceDir, inputUrl, 'ucd/auxiliary/GraphemeBreakProperty.txt')
    strGraphemeBreakTest        = downloadSource(sourceDir, inputUrl, 'ucd/auxiliary/GraphemeBreakTest.txt')

    print("\nProcess UCD:")

    dUcp = dict()
    dUcp['ucEmojiData'] = ucEmojiData.proc(strEmojiData)
    dUcp['ucGraphemeClusterBoundary'] = ucGraphemeClusterBoundary.proc(strGraphemeClusterBoundary)
    dUcp['ucGraphemeBreakProperty'] = ucGraphemeBreakProperty.proc(strGraphemeBreakProperty)
    dUcp['ucGraphemeBreakTest'] = ucGraphemeBreakTest.proc(strGraphemeBreakTest)

    print("\nWrite UCD:")
    
    for k in dUcp:
        if dUcp[k]:
            for ext in dUcp[k]:
                if dUcp[k][ext]:
                    outputFile = outputDir + k + '.' + ext
                    print(" write " + outputFile)
                    with open(outputFile, 'w', encoding="utf-8") as fOut:
                        fOut.write(dUcp[k][ext])
                    
    print("\nDone!\n")

### Main

print("UCD processor")
print("--------------")

parser = argparse.ArgumentParser(description='generate c sources from unicode character database')
parser.add_argument("-i", dest="inputUrl", default='https://www.unicode.org/Public/UCD/latest/',
                    help="url to udc", metavar="URL")
parser.add_argument("-s", dest="sourceDir", default='sources/',
                    help="path to source directory", metavar="SOURCE")
parser.add_argument("-o", dest="outputDir", default='../ucp/ucd/',
                    help="path to output directory", metavar="OUT")
args = parser.parse_args()

ucd(args.inputUrl, args.sourceDir, args.outputDir)

