#pragma once

/* THIS FILE IS GENERATED */

#ifndef UCP_UCGRAPHEMEBREAKTEST
#define UCP_UCGRAPHEMEBREAKTEST

typedef struct ucGraphemeBreakTestCase {
    const unsigned char* title;
    const unsigned char* input;
    const unsigned char output[16][22];
} ucGraphemeBreakTestCase;

ucGraphemeBreakTestCase ucGraphemeBreakTestCases[] =
{
    {
        "  - [0.2] SPACE (Other) - [999.0] SPACE (Other) - [0.3]",
        "\x20\x20",
        { "\x20", "\x20" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\x20\xcc\x88\x20",
        { "\x20\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] SPACE (Other) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x20\x0d",
        { "\x20", "\x0d" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x20\xcc\x88\x0d",
        { "\x20\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] SPACE (Other) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x20\x0a",
        { "\x20", "\x0a" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x20\xcc\x88\x0a",
        { "\x20\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] SPACE (Other) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\x20\x01",
        { "\x20", "\x01" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\x20\xcc\x88\x01",
        { "\x20\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x20\xcd\x8f",
        { "\x20\xcd\x8f" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x20\xcc\x88\xcd\x8f",
        { "\x20\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x20\xf0\x9f\x87\xa6",
        { "\x20", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x20\xcc\x88\xf0\x9f\x87\xa6",
        { "\x20\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x20\xd8\x80",
        { "\x20", "\xd8\x80" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x20\xcc\x88\xd8\x80",
        { "\x20\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x20\xe0\xa4\x83",
        { "\x20\xe0\xa4\x83" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x20\xcc\x88\xe0\xa4\x83",
        { "\x20\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x20\xe1\x84\x80",
        { "\x20", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x20\xcc\x88\xe1\x84\x80",
        { "\x20\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x20\xe1\x85\xa0",
        { "\x20", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x20\xcc\x88\xe1\x85\xa0",
        { "\x20\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x20\xe1\x86\xa8",
        { "\x20", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x20\xcc\x88\xe1\x86\xa8",
        { "\x20\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x20\xea\xb0\x80",
        { "\x20", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x20\xcc\x88\xea\xb0\x80",
        { "\x20\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x20\xea\xb0\x81",
        { "\x20", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x20\xcc\x88\xea\xb0\x81",
        { "\x20\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] WATCH (ExtPict) - [0.3]",
        "\x20\xe2\x8c\x9a",
        { "\x20", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\x20\xcc\x88\xe2\x8c\x9a",
        { "\x20\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x20\xcc\x80",
        { "\x20\xcc\x80" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x20\xcc\x88\xcc\x80",
        { "\x20\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x20\xe2\x80\x8d",
        { "\x20\xe2\x80\x8d" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x20\xcc\x88\xe2\x80\x8d",
        { "\x20\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] SPACE (Other) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\x20\xcd\xb8",
        { "\x20", "\xcd\xb8" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\x20\xcc\x88\xcd\xb8",
        { "\x20\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] SPACE (Other) - [0.3]",
        "\x0d\x20",
        { "\x0d", "\x20" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\x0d\xcc\x88\x20",
        { "\x0d", "\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x0d\x0d",
        { "\x0d", "\x0d" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x0d\xcc\x88\x0d",
        { "\x0d", "\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) + [3.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x0d\x0a",
        { "\x0d\x0a" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x0d\xcc\x88\x0a",
        { "\x0d", "\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] <START OF HEADING> (Control) - [0.3]",
        "\x0d\x01",
        { "\x0d", "\x01" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\x0d\xcc\x88\x01",
        { "\x0d", "\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x0d\xcd\x8f",
        { "\x0d", "\xcd\x8f" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x0d\xcc\x88\xcd\x8f",
        { "\x0d", "\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x0d\xf0\x9f\x87\xa6",
        { "\x0d", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x0d\xcc\x88\xf0\x9f\x87\xa6",
        { "\x0d", "\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x0d\xd8\x80",
        { "\x0d", "\xd8\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x0d\xcc\x88\xd8\x80",
        { "\x0d", "\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x0d\xe0\xa4\x83",
        { "\x0d", "\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x0d\xcc\x88\xe0\xa4\x83",
        { "\x0d", "\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x0d\xe1\x84\x80",
        { "\x0d", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x0d\xcc\x88\xe1\x84\x80",
        { "\x0d", "\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x0d\xe1\x85\xa0",
        { "\x0d", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x0d\xcc\x88\xe1\x85\xa0",
        { "\x0d", "\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x0d\xe1\x86\xa8",
        { "\x0d", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x0d\xcc\x88\xe1\x86\xa8",
        { "\x0d", "\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x0d\xea\xb0\x80",
        { "\x0d", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x0d\xcc\x88\xea\xb0\x80",
        { "\x0d", "\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x0d\xea\xb0\x81",
        { "\x0d", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x0d\xcc\x88\xea\xb0\x81",
        { "\x0d", "\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] WATCH (ExtPict) - [0.3]",
        "\x0d\xe2\x8c\x9a",
        { "\x0d", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\x0d\xcc\x88\xe2\x8c\x9a",
        { "\x0d", "\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x0d\xcc\x80",
        { "\x0d", "\xcc\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x0d\xcc\x88\xcc\x80",
        { "\x0d", "\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x0d\xe2\x80\x8d",
        { "\x0d", "\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x0d\xcc\x88\xe2\x80\x8d",
        { "\x0d", "\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] <reserved-0378> (Other) - [0.3]",
        "\x0d\xcd\xb8",
        { "\x0d", "\xcd\xb8" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\x0d\xcc\x88\xcd\xb8",
        { "\x0d", "\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] SPACE (Other) - [0.3]",
        "\x0a\x20",
        { "\x0a", "\x20" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\x0a\xcc\x88\x20",
        { "\x0a", "\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x0a\x0d",
        { "\x0a", "\x0d" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x0a\xcc\x88\x0d",
        { "\x0a", "\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x0a\x0a",
        { "\x0a", "\x0a" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x0a\xcc\x88\x0a",
        { "\x0a", "\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] <START OF HEADING> (Control) - [0.3]",
        "\x0a\x01",
        { "\x0a", "\x01" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\x0a\xcc\x88\x01",
        { "\x0a", "\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x0a\xcd\x8f",
        { "\x0a", "\xcd\x8f" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x0a\xcc\x88\xcd\x8f",
        { "\x0a", "\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x0a\xf0\x9f\x87\xa6",
        { "\x0a", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x0a\xcc\x88\xf0\x9f\x87\xa6",
        { "\x0a", "\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x0a\xd8\x80",
        { "\x0a", "\xd8\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x0a\xcc\x88\xd8\x80",
        { "\x0a", "\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x0a\xe0\xa4\x83",
        { "\x0a", "\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x0a\xcc\x88\xe0\xa4\x83",
        { "\x0a", "\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x0a\xe1\x84\x80",
        { "\x0a", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x0a\xcc\x88\xe1\x84\x80",
        { "\x0a", "\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x0a\xe1\x85\xa0",
        { "\x0a", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x0a\xcc\x88\xe1\x85\xa0",
        { "\x0a", "\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x0a\xe1\x86\xa8",
        { "\x0a", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x0a\xcc\x88\xe1\x86\xa8",
        { "\x0a", "\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x0a\xea\xb0\x80",
        { "\x0a", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x0a\xcc\x88\xea\xb0\x80",
        { "\x0a", "\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x0a\xea\xb0\x81",
        { "\x0a", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x0a\xcc\x88\xea\xb0\x81",
        { "\x0a", "\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] WATCH (ExtPict) - [0.3]",
        "\x0a\xe2\x8c\x9a",
        { "\x0a", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\x0a\xcc\x88\xe2\x8c\x9a",
        { "\x0a", "\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x0a\xcc\x80",
        { "\x0a", "\xcc\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x0a\xcc\x88\xcc\x80",
        { "\x0a", "\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x0a\xe2\x80\x8d",
        { "\x0a", "\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x0a\xcc\x88\xe2\x80\x8d",
        { "\x0a", "\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] <reserved-0378> (Other) - [0.3]",
        "\x0a\xcd\xb8",
        { "\x0a", "\xcd\xb8" }
    },
    {
        "  - [0.2] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\x0a\xcc\x88\xcd\xb8",
        { "\x0a", "\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] SPACE (Other) - [0.3]",
        "\x01\x20",
        { "\x01", "\x20" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\x01\xcc\x88\x20",
        { "\x01", "\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x01\x0d",
        { "\x01", "\x0d" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\x01\xcc\x88\x0d",
        { "\x01", "\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x01\x0a",
        { "\x01", "\x0a" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\x01\xcc\x88\x0a",
        { "\x01", "\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] <START OF HEADING> (Control) - [0.3]",
        "\x01\x01",
        { "\x01", "\x01" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\x01\xcc\x88\x01",
        { "\x01", "\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x01\xcd\x8f",
        { "\x01", "\xcd\x8f" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\x01\xcc\x88\xcd\x8f",
        { "\x01", "\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x01\xf0\x9f\x87\xa6",
        { "\x01", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\x01\xcc\x88\xf0\x9f\x87\xa6",
        { "\x01", "\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x01\xd8\x80",
        { "\x01", "\xd8\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\x01\xcc\x88\xd8\x80",
        { "\x01", "\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x01\xe0\xa4\x83",
        { "\x01", "\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\x01\xcc\x88\xe0\xa4\x83",
        { "\x01", "\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x01\xe1\x84\x80",
        { "\x01", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\x01\xcc\x88\xe1\x84\x80",
        { "\x01", "\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x01\xe1\x85\xa0",
        { "\x01", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\x01\xcc\x88\xe1\x85\xa0",
        { "\x01", "\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x01\xe1\x86\xa8",
        { "\x01", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\x01\xcc\x88\xe1\x86\xa8",
        { "\x01", "\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x01\xea\xb0\x80",
        { "\x01", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\x01\xcc\x88\xea\xb0\x80",
        { "\x01", "\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x01\xea\xb0\x81",
        { "\x01", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\x01\xcc\x88\xea\xb0\x81",
        { "\x01", "\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] WATCH (ExtPict) - [0.3]",
        "\x01\xe2\x8c\x9a",
        { "\x01", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\x01\xcc\x88\xe2\x8c\x9a",
        { "\x01", "\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x01\xcc\x80",
        { "\x01", "\xcc\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\x01\xcc\x88\xcc\x80",
        { "\x01", "\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x01\xe2\x80\x8d",
        { "\x01", "\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x01\xcc\x88\xe2\x80\x8d",
        { "\x01", "\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] <reserved-0378> (Other) - [0.3]",
        "\x01\xcd\xb8",
        { "\x01", "\xcd\xb8" }
    },
    {
        "  - [0.2] <START OF HEADING> (Control) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\x01\xcc\x88\xcd\xb8",
        { "\x01", "\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] SPACE (Other) - [0.3]",
        "\xcd\x8f\x20",
        { "\xcd\x8f", "\x20" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xcd\x8f\xcc\x88\x20",
        { "\xcd\x8f\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xcd\x8f\x0d",
        { "\xcd\x8f", "\x0d" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xcd\x8f\xcc\x88\x0d",
        { "\xcd\x8f\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xcd\x8f\x0a",
        { "\xcd\x8f", "\x0a" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xcd\x8f\xcc\x88\x0a",
        { "\xcd\x8f\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xcd\x8f\x01",
        { "\xcd\x8f", "\x01" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xcd\x8f\xcc\x88\x01",
        { "\xcd\x8f\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xcd\x8f\xcd\x8f",
        { "\xcd\x8f\xcd\x8f" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xcd\x8f\xcc\x88\xcd\x8f",
        { "\xcd\x8f\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xcd\x8f\xf0\x9f\x87\xa6",
        { "\xcd\x8f", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xcd\x8f\xcc\x88\xf0\x9f\x87\xa6",
        { "\xcd\x8f\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xcd\x8f\xd8\x80",
        { "\xcd\x8f", "\xd8\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xcd\x8f\xcc\x88\xd8\x80",
        { "\xcd\x8f\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xcd\x8f\xe0\xa4\x83",
        { "\xcd\x8f\xe0\xa4\x83" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xcd\x8f\xcc\x88\xe0\xa4\x83",
        { "\xcd\x8f\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xcd\x8f\xe1\x84\x80",
        { "\xcd\x8f", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xcd\x8f\xcc\x88\xe1\x84\x80",
        { "\xcd\x8f\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xcd\x8f\xe1\x85\xa0",
        { "\xcd\x8f", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xcd\x8f\xcc\x88\xe1\x85\xa0",
        { "\xcd\x8f\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xcd\x8f\xe1\x86\xa8",
        { "\xcd\x8f", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xcd\x8f\xcc\x88\xe1\x86\xa8",
        { "\xcd\x8f\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xcd\x8f\xea\xb0\x80",
        { "\xcd\x8f", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xcd\x8f\xcc\x88\xea\xb0\x80",
        { "\xcd\x8f\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xcd\x8f\xea\xb0\x81",
        { "\xcd\x8f", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xcd\x8f\xcc\x88\xea\xb0\x81",
        { "\xcd\x8f\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xcd\x8f\xe2\x8c\x9a",
        { "\xcd\x8f", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xcd\x8f\xcc\x88\xe2\x8c\x9a",
        { "\xcd\x8f\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xcd\x8f\xcc\x80",
        { "\xcd\x8f\xcc\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xcd\x8f\xcc\x88\xcc\x80",
        { "\xcd\x8f\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xcd\x8f\xe2\x80\x8d",
        { "\xcd\x8f\xe2\x80\x8d" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xcd\x8f\xcc\x88\xe2\x80\x8d",
        { "\xcd\x8f\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xcd\x8f\xcd\xb8",
        { "\xcd\x8f", "\xcd\xb8" }
    },
    {
        "  - [0.2] COMBINING GRAPHEME JOINER (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xcd\x8f\xcc\x88\xcd\xb8",
        { "\xcd\x8f\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] SPACE (Other) - [0.3]",
        "\xf0\x9f\x87\xa6\x20",
        { "\xf0\x9f\x87\xa6", "\x20" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\x20",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xf0\x9f\x87\xa6\x0d",
        { "\xf0\x9f\x87\xa6", "\x0d" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\x0d",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xf0\x9f\x87\xa6\x0a",
        { "\xf0\x9f\x87\xa6", "\x0a" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\x0a",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xf0\x9f\x87\xa6\x01",
        { "\xf0\x9f\x87\xa6", "\x01" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\x01",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xf0\x9f\x87\xa6\xcd\x8f",
        { "\xf0\x9f\x87\xa6\xcd\x8f" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xcd\x8f",
        { "\xf0\x9f\x87\xa6\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [12.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xf0\x9f\x87\xa6\xf0\x9f\x87\xa6",
        { "\xf0\x9f\x87\xa6\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xf0\x9f\x87\xa6",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xf0\x9f\x87\xa6\xd8\x80",
        { "\xf0\x9f\x87\xa6", "\xd8\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xd8\x80",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xf0\x9f\x87\xa6\xe0\xa4\x83",
        { "\xf0\x9f\x87\xa6\xe0\xa4\x83" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xe0\xa4\x83",
        { "\xf0\x9f\x87\xa6\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xf0\x9f\x87\xa6\xe1\x84\x80",
        { "\xf0\x9f\x87\xa6", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xe1\x84\x80",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xf0\x9f\x87\xa6\xe1\x85\xa0",
        { "\xf0\x9f\x87\xa6", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xe1\x85\xa0",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xf0\x9f\x87\xa6\xe1\x86\xa8",
        { "\xf0\x9f\x87\xa6", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xe1\x86\xa8",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xf0\x9f\x87\xa6\xea\xb0\x80",
        { "\xf0\x9f\x87\xa6", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xea\xb0\x80",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xf0\x9f\x87\xa6\xea\xb0\x81",
        { "\xf0\x9f\x87\xa6", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xea\xb0\x81",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xf0\x9f\x87\xa6\xe2\x8c\x9a",
        { "\xf0\x9f\x87\xa6", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xe2\x8c\x9a",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x80",
        { "\xf0\x9f\x87\xa6\xcc\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xcc\x80",
        { "\xf0\x9f\x87\xa6\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xf0\x9f\x87\xa6\xe2\x80\x8d",
        { "\xf0\x9f\x87\xa6\xe2\x80\x8d" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xe2\x80\x8d",
        { "\xf0\x9f\x87\xa6\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xf0\x9f\x87\xa6\xcd\xb8",
        { "\xf0\x9f\x87\xa6", "\xcd\xb8" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xf0\x9f\x87\xa6\xcc\x88\xcd\xb8",
        { "\xf0\x9f\x87\xa6\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] SPACE (Other) - [0.3]",
        "\xd8\x80\x20",
        { "\xd8\x80\x20" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xd8\x80\xcc\x88\x20",
        { "\xd8\x80\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xd8\x80\x0d",
        { "\xd8\x80", "\x0d" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xd8\x80\xcc\x88\x0d",
        { "\xd8\x80\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xd8\x80\x0a",
        { "\xd8\x80", "\x0a" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xd8\x80\xcc\x88\x0a",
        { "\xd8\x80\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xd8\x80\x01",
        { "\xd8\x80", "\x01" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xd8\x80\xcc\x88\x01",
        { "\xd8\x80\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xd8\x80\xcd\x8f",
        { "\xd8\x80\xcd\x8f" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xd8\x80\xcc\x88\xcd\x8f",
        { "\xd8\x80\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xd8\x80\xf0\x9f\x87\xa6",
        { "\xd8\x80\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xd8\x80\xcc\x88\xf0\x9f\x87\xa6",
        { "\xd8\x80\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xd8\x80\xd8\x80",
        { "\xd8\x80\xd8\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xd8\x80\xcc\x88\xd8\x80",
        { "\xd8\x80\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xd8\x80\xe0\xa4\x83",
        { "\xd8\x80\xe0\xa4\x83" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xd8\x80\xcc\x88\xe0\xa4\x83",
        { "\xd8\x80\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xd8\x80\xe1\x84\x80",
        { "\xd8\x80\xe1\x84\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xd8\x80\xcc\x88\xe1\x84\x80",
        { "\xd8\x80\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xd8\x80\xe1\x85\xa0",
        { "\xd8\x80\xe1\x85\xa0" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xd8\x80\xcc\x88\xe1\x85\xa0",
        { "\xd8\x80\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xd8\x80\xe1\x86\xa8",
        { "\xd8\x80\xe1\x86\xa8" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xd8\x80\xcc\x88\xe1\x86\xa8",
        { "\xd8\x80\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xd8\x80\xea\xb0\x80",
        { "\xd8\x80\xea\xb0\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xd8\x80\xcc\x88\xea\xb0\x80",
        { "\xd8\x80\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xd8\x80\xea\xb0\x81",
        { "\xd8\x80\xea\xb0\x81" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xd8\x80\xcc\x88\xea\xb0\x81",
        { "\xd8\x80\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] WATCH (ExtPict) - [0.3]",
        "\xd8\x80\xe2\x8c\x9a",
        { "\xd8\x80\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xd8\x80\xcc\x88\xe2\x8c\x9a",
        { "\xd8\x80\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xd8\x80\xcc\x80",
        { "\xd8\x80\xcc\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xd8\x80\xcc\x88\xcc\x80",
        { "\xd8\x80\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xd8\x80\xe2\x80\x8d",
        { "\xd8\x80\xe2\x80\x8d" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xd8\x80\xcc\x88\xe2\x80\x8d",
        { "\xd8\x80\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.2] <reserved-0378> (Other) - [0.3]",
        "\xd8\x80\xcd\xb8",
        { "\xd8\x80\xcd\xb8" }
    },
    {
        "  - [0.2] ARABIC NUMBER SIGN (Prepend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xd8\x80\xcc\x88\xcd\xb8",
        { "\xd8\x80\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] SPACE (Other) - [0.3]",
        "\xe0\xa4\x83\x20",
        { "\xe0\xa4\x83", "\x20" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\x20",
        { "\xe0\xa4\x83\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe0\xa4\x83\x0d",
        { "\xe0\xa4\x83", "\x0d" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\x0d",
        { "\xe0\xa4\x83\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe0\xa4\x83\x0a",
        { "\xe0\xa4\x83", "\x0a" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\x0a",
        { "\xe0\xa4\x83\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe0\xa4\x83\x01",
        { "\xe0\xa4\x83", "\x01" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\x01",
        { "\xe0\xa4\x83\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe0\xa4\x83\xcd\x8f",
        { "\xe0\xa4\x83\xcd\x8f" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xcd\x8f",
        { "\xe0\xa4\x83\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe0\xa4\x83\xf0\x9f\x87\xa6",
        { "\xe0\xa4\x83", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xf0\x9f\x87\xa6",
        { "\xe0\xa4\x83\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe0\xa4\x83\xd8\x80",
        { "\xe0\xa4\x83", "\xd8\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xd8\x80",
        { "\xe0\xa4\x83\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe0\xa4\x83\xe0\xa4\x83",
        { "\xe0\xa4\x83\xe0\xa4\x83" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xe0\xa4\x83",
        { "\xe0\xa4\x83\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe0\xa4\x83\xe1\x84\x80",
        { "\xe0\xa4\x83", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xe1\x84\x80",
        { "\xe0\xa4\x83\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe0\xa4\x83\xe1\x85\xa0",
        { "\xe0\xa4\x83", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xe1\x85\xa0",
        { "\xe0\xa4\x83\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe0\xa4\x83\xe1\x86\xa8",
        { "\xe0\xa4\x83", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xe1\x86\xa8",
        { "\xe0\xa4\x83\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe0\xa4\x83\xea\xb0\x80",
        { "\xe0\xa4\x83", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xea\xb0\x80",
        { "\xe0\xa4\x83\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe0\xa4\x83\xea\xb0\x81",
        { "\xe0\xa4\x83", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xea\xb0\x81",
        { "\xe0\xa4\x83\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe0\xa4\x83\xe2\x8c\x9a",
        { "\xe0\xa4\x83", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xe2\x8c\x9a",
        { "\xe0\xa4\x83\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe0\xa4\x83\xcc\x80",
        { "\xe0\xa4\x83\xcc\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xcc\x80",
        { "\xe0\xa4\x83\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe0\xa4\x83\xe2\x80\x8d",
        { "\xe0\xa4\x83\xe2\x80\x8d" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xe2\x80\x8d",
        { "\xe0\xa4\x83\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe0\xa4\x83\xcd\xb8",
        { "\xe0\xa4\x83", "\xcd\xb8" }
    },
    {
        "  - [0.2] DEVANAGARI SIGN VISARGA (SpacingMark) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe0\xa4\x83\xcc\x88\xcd\xb8",
        { "\xe0\xa4\x83\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [999.0] SPACE (Other) - [0.3]",
        "\xe1\x84\x80\x20",
        { "\xe1\x84\x80", "\x20" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xe1\x84\x80\xcc\x88\x20",
        { "\xe1\x84\x80\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe1\x84\x80\x0d",
        { "\xe1\x84\x80", "\x0d" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe1\x84\x80\xcc\x88\x0d",
        { "\xe1\x84\x80\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe1\x84\x80\x0a",
        { "\xe1\x84\x80", "\x0a" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe1\x84\x80\xcc\x88\x0a",
        { "\xe1\x84\x80\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe1\x84\x80\x01",
        { "\xe1\x84\x80", "\x01" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe1\x84\x80\xcc\x88\x01",
        { "\xe1\x84\x80\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe1\x84\x80\xcd\x8f",
        { "\xe1\x84\x80\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xcd\x8f",
        { "\xe1\x84\x80\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe1\x84\x80\xf0\x9f\x87\xa6",
        { "\xe1\x84\x80", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xf0\x9f\x87\xa6",
        { "\xe1\x84\x80\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe1\x84\x80\xd8\x80",
        { "\xe1\x84\x80", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xd8\x80",
        { "\xe1\x84\x80\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe1\x84\x80\xe0\xa4\x83",
        { "\xe1\x84\x80\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xe0\xa4\x83",
        { "\xe1\x84\x80\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [6.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe1\x84\x80\xe1\x84\x80",
        { "\xe1\x84\x80\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xe1\x84\x80",
        { "\xe1\x84\x80\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [6.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe1\x84\x80\xe1\x85\xa0",
        { "\xe1\x84\x80\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xe1\x85\xa0",
        { "\xe1\x84\x80\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe1\x84\x80\xe1\x86\xa8",
        { "\xe1\x84\x80", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xe1\x86\xa8",
        { "\xe1\x84\x80\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [6.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe1\x84\x80\xea\xb0\x80",
        { "\xe1\x84\x80\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xea\xb0\x80",
        { "\xe1\x84\x80\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [6.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe1\x84\x80\xea\xb0\x81",
        { "\xe1\x84\x80\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xea\xb0\x81",
        { "\xe1\x84\x80\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe1\x84\x80\xe2\x8c\x9a",
        { "\xe1\x84\x80", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xe2\x8c\x9a",
        { "\xe1\x84\x80\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe1\x84\x80\xcc\x80",
        { "\xe1\x84\x80\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xcc\x80",
        { "\xe1\x84\x80\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe1\x84\x80\xe2\x80\x8d",
        { "\xe1\x84\x80\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xe2\x80\x8d",
        { "\xe1\x84\x80\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe1\x84\x80\xcd\xb8",
        { "\xe1\x84\x80", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe1\x84\x80\xcc\x88\xcd\xb8",
        { "\xe1\x84\x80\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] SPACE (Other) - [0.3]",
        "\xe1\x85\xa0\x20",
        { "\xe1\x85\xa0", "\x20" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\x20",
        { "\xe1\x85\xa0\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe1\x85\xa0\x0d",
        { "\xe1\x85\xa0", "\x0d" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\x0d",
        { "\xe1\x85\xa0\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe1\x85\xa0\x0a",
        { "\xe1\x85\xa0", "\x0a" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\x0a",
        { "\xe1\x85\xa0\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe1\x85\xa0\x01",
        { "\xe1\x85\xa0", "\x01" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\x01",
        { "\xe1\x85\xa0\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe1\x85\xa0\xcd\x8f",
        { "\xe1\x85\xa0\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xcd\x8f",
        { "\xe1\x85\xa0\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe1\x85\xa0\xf0\x9f\x87\xa6",
        { "\xe1\x85\xa0", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xf0\x9f\x87\xa6",
        { "\xe1\x85\xa0\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe1\x85\xa0\xd8\x80",
        { "\xe1\x85\xa0", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xd8\x80",
        { "\xe1\x85\xa0\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe1\x85\xa0\xe0\xa4\x83",
        { "\xe1\x85\xa0\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xe0\xa4\x83",
        { "\xe1\x85\xa0\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe1\x85\xa0\xe1\x84\x80",
        { "\xe1\x85\xa0", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xe1\x84\x80",
        { "\xe1\x85\xa0\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [7.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe1\x85\xa0\xe1\x85\xa0",
        { "\xe1\x85\xa0\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xe1\x85\xa0",
        { "\xe1\x85\xa0\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [7.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe1\x85\xa0\xe1\x86\xa8",
        { "\xe1\x85\xa0\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xe1\x86\xa8",
        { "\xe1\x85\xa0\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe1\x85\xa0\xea\xb0\x80",
        { "\xe1\x85\xa0", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xea\xb0\x80",
        { "\xe1\x85\xa0\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe1\x85\xa0\xea\xb0\x81",
        { "\xe1\x85\xa0", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xea\xb0\x81",
        { "\xe1\x85\xa0\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe1\x85\xa0\xe2\x8c\x9a",
        { "\xe1\x85\xa0", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xe2\x8c\x9a",
        { "\xe1\x85\xa0\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe1\x85\xa0\xcc\x80",
        { "\xe1\x85\xa0\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xcc\x80",
        { "\xe1\x85\xa0\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe1\x85\xa0\xe2\x80\x8d",
        { "\xe1\x85\xa0\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xe2\x80\x8d",
        { "\xe1\x85\xa0\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe1\x85\xa0\xcd\xb8",
        { "\xe1\x85\xa0", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL JUNGSEONG FILLER (V) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe1\x85\xa0\xcc\x88\xcd\xb8",
        { "\xe1\x85\xa0\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] SPACE (Other) - [0.3]",
        "\xe1\x86\xa8\x20",
        { "\xe1\x86\xa8", "\x20" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\x20",
        { "\xe1\x86\xa8\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe1\x86\xa8\x0d",
        { "\xe1\x86\xa8", "\x0d" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\x0d",
        { "\xe1\x86\xa8\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe1\x86\xa8\x0a",
        { "\xe1\x86\xa8", "\x0a" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\x0a",
        { "\xe1\x86\xa8\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe1\x86\xa8\x01",
        { "\xe1\x86\xa8", "\x01" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\x01",
        { "\xe1\x86\xa8\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe1\x86\xa8\xcd\x8f",
        { "\xe1\x86\xa8\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xcd\x8f",
        { "\xe1\x86\xa8\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe1\x86\xa8\xf0\x9f\x87\xa6",
        { "\xe1\x86\xa8", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xf0\x9f\x87\xa6",
        { "\xe1\x86\xa8\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe1\x86\xa8\xd8\x80",
        { "\xe1\x86\xa8", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xd8\x80",
        { "\xe1\x86\xa8\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe1\x86\xa8\xe0\xa4\x83",
        { "\xe1\x86\xa8\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xe0\xa4\x83",
        { "\xe1\x86\xa8\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe1\x86\xa8\xe1\x84\x80",
        { "\xe1\x86\xa8", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xe1\x84\x80",
        { "\xe1\x86\xa8\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe1\x86\xa8\xe1\x85\xa0",
        { "\xe1\x86\xa8", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xe1\x85\xa0",
        { "\xe1\x86\xa8\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [8.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe1\x86\xa8\xe1\x86\xa8",
        { "\xe1\x86\xa8\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xe1\x86\xa8",
        { "\xe1\x86\xa8\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe1\x86\xa8\xea\xb0\x80",
        { "\xe1\x86\xa8", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xea\xb0\x80",
        { "\xe1\x86\xa8\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe1\x86\xa8\xea\xb0\x81",
        { "\xe1\x86\xa8", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xea\xb0\x81",
        { "\xe1\x86\xa8\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe1\x86\xa8\xe2\x8c\x9a",
        { "\xe1\x86\xa8", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xe2\x8c\x9a",
        { "\xe1\x86\xa8\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe1\x86\xa8\xcc\x80",
        { "\xe1\x86\xa8\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xcc\x80",
        { "\xe1\x86\xa8\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe1\x86\xa8\xe2\x80\x8d",
        { "\xe1\x86\xa8\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xe2\x80\x8d",
        { "\xe1\x86\xa8\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe1\x86\xa8\xcd\xb8",
        { "\xe1\x86\xa8", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL JONGSEONG KIYEOK (T) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe1\x86\xa8\xcc\x88\xcd\xb8",
        { "\xe1\x86\xa8\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] SPACE (Other) - [0.3]",
        "\xea\xb0\x80\x20",
        { "\xea\xb0\x80", "\x20" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xea\xb0\x80\xcc\x88\x20",
        { "\xea\xb0\x80\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xea\xb0\x80\x0d",
        { "\xea\xb0\x80", "\x0d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xea\xb0\x80\xcc\x88\x0d",
        { "\xea\xb0\x80\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xea\xb0\x80\x0a",
        { "\xea\xb0\x80", "\x0a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xea\xb0\x80\xcc\x88\x0a",
        { "\xea\xb0\x80\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xea\xb0\x80\x01",
        { "\xea\xb0\x80", "\x01" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xea\xb0\x80\xcc\x88\x01",
        { "\xea\xb0\x80\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xea\xb0\x80\xcd\x8f",
        { "\xea\xb0\x80\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xcd\x8f",
        { "\xea\xb0\x80\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xea\xb0\x80\xf0\x9f\x87\xa6",
        { "\xea\xb0\x80", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xf0\x9f\x87\xa6",
        { "\xea\xb0\x80\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xea\xb0\x80\xd8\x80",
        { "\xea\xb0\x80", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xd8\x80",
        { "\xea\xb0\x80\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xea\xb0\x80\xe0\xa4\x83",
        { "\xea\xb0\x80\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xe0\xa4\x83",
        { "\xea\xb0\x80\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xea\xb0\x80\xe1\x84\x80",
        { "\xea\xb0\x80", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xe1\x84\x80",
        { "\xea\xb0\x80\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [7.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xea\xb0\x80\xe1\x85\xa0",
        { "\xea\xb0\x80\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xe1\x85\xa0",
        { "\xea\xb0\x80\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [7.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xea\xb0\x80\xe1\x86\xa8",
        { "\xea\xb0\x80\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xe1\x86\xa8",
        { "\xea\xb0\x80\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xea\xb0\x80\xea\xb0\x80",
        { "\xea\xb0\x80", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xea\xb0\x80",
        { "\xea\xb0\x80\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xea\xb0\x80\xea\xb0\x81",
        { "\xea\xb0\x80", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xea\xb0\x81",
        { "\xea\xb0\x80\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xea\xb0\x80\xe2\x8c\x9a",
        { "\xea\xb0\x80", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xe2\x8c\x9a",
        { "\xea\xb0\x80\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xea\xb0\x80\xcc\x80",
        { "\xea\xb0\x80\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xcc\x80",
        { "\xea\xb0\x80\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xea\xb0\x80\xe2\x80\x8d",
        { "\xea\xb0\x80\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xe2\x80\x8d",
        { "\xea\xb0\x80\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xea\xb0\x80\xcd\xb8",
        { "\xea\xb0\x80", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xea\xb0\x80\xcc\x88\xcd\xb8",
        { "\xea\xb0\x80\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] SPACE (Other) - [0.3]",
        "\xea\xb0\x81\x20",
        { "\xea\xb0\x81", "\x20" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xea\xb0\x81\xcc\x88\x20",
        { "\xea\xb0\x81\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xea\xb0\x81\x0d",
        { "\xea\xb0\x81", "\x0d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xea\xb0\x81\xcc\x88\x0d",
        { "\xea\xb0\x81\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xea\xb0\x81\x0a",
        { "\xea\xb0\x81", "\x0a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xea\xb0\x81\xcc\x88\x0a",
        { "\xea\xb0\x81\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xea\xb0\x81\x01",
        { "\xea\xb0\x81", "\x01" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xea\xb0\x81\xcc\x88\x01",
        { "\xea\xb0\x81\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xea\xb0\x81\xcd\x8f",
        { "\xea\xb0\x81\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xcd\x8f",
        { "\xea\xb0\x81\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xea\xb0\x81\xf0\x9f\x87\xa6",
        { "\xea\xb0\x81", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xf0\x9f\x87\xa6",
        { "\xea\xb0\x81\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xea\xb0\x81\xd8\x80",
        { "\xea\xb0\x81", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xd8\x80",
        { "\xea\xb0\x81\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xea\xb0\x81\xe0\xa4\x83",
        { "\xea\xb0\x81\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xe0\xa4\x83",
        { "\xea\xb0\x81\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xea\xb0\x81\xe1\x84\x80",
        { "\xea\xb0\x81", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xe1\x84\x80",
        { "\xea\xb0\x81\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xea\xb0\x81\xe1\x85\xa0",
        { "\xea\xb0\x81", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xe1\x85\xa0",
        { "\xea\xb0\x81\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [8.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xea\xb0\x81\xe1\x86\xa8",
        { "\xea\xb0\x81\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xe1\x86\xa8",
        { "\xea\xb0\x81\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xea\xb0\x81\xea\xb0\x80",
        { "\xea\xb0\x81", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xea\xb0\x80",
        { "\xea\xb0\x81\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xea\xb0\x81\xea\xb0\x81",
        { "\xea\xb0\x81", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xea\xb0\x81",
        { "\xea\xb0\x81\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xea\xb0\x81\xe2\x8c\x9a",
        { "\xea\xb0\x81", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xe2\x8c\x9a",
        { "\xea\xb0\x81\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xea\xb0\x81\xcc\x80",
        { "\xea\xb0\x81\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xcc\x80",
        { "\xea\xb0\x81\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xea\xb0\x81\xe2\x80\x8d",
        { "\xea\xb0\x81\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xe2\x80\x8d",
        { "\xea\xb0\x81\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xea\xb0\x81\xcd\xb8",
        { "\xea\xb0\x81", "\xcd\xb8" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xea\xb0\x81\xcc\x88\xcd\xb8",
        { "\xea\xb0\x81\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] SPACE (Other) - [0.3]",
        "\xe2\x8c\x9a\x20",
        { "\xe2\x8c\x9a", "\x20" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\x20",
        { "\xe2\x8c\x9a\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe2\x8c\x9a\x0d",
        { "\xe2\x8c\x9a", "\x0d" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\x0d",
        { "\xe2\x8c\x9a\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe2\x8c\x9a\x0a",
        { "\xe2\x8c\x9a", "\x0a" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\x0a",
        { "\xe2\x8c\x9a\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe2\x8c\x9a\x01",
        { "\xe2\x8c\x9a", "\x01" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\x01",
        { "\xe2\x8c\x9a\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe2\x8c\x9a\xcd\x8f",
        { "\xe2\x8c\x9a\xcd\x8f" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xcd\x8f",
        { "\xe2\x8c\x9a\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe2\x8c\x9a\xf0\x9f\x87\xa6",
        { "\xe2\x8c\x9a", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xf0\x9f\x87\xa6",
        { "\xe2\x8c\x9a\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe2\x8c\x9a\xd8\x80",
        { "\xe2\x8c\x9a", "\xd8\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xd8\x80",
        { "\xe2\x8c\x9a\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe2\x8c\x9a\xe0\xa4\x83",
        { "\xe2\x8c\x9a\xe0\xa4\x83" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xe0\xa4\x83",
        { "\xe2\x8c\x9a\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe2\x8c\x9a\xe1\x84\x80",
        { "\xe2\x8c\x9a", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xe1\x84\x80",
        { "\xe2\x8c\x9a\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe2\x8c\x9a\xe1\x85\xa0",
        { "\xe2\x8c\x9a", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xe1\x85\xa0",
        { "\xe2\x8c\x9a\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe2\x8c\x9a\xe1\x86\xa8",
        { "\xe2\x8c\x9a", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xe1\x86\xa8",
        { "\xe2\x8c\x9a\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe2\x8c\x9a\xea\xb0\x80",
        { "\xe2\x8c\x9a", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xea\xb0\x80",
        { "\xe2\x8c\x9a\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe2\x8c\x9a\xea\xb0\x81",
        { "\xe2\x8c\x9a", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xea\xb0\x81",
        { "\xe2\x8c\x9a\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe2\x8c\x9a\xe2\x8c\x9a",
        { "\xe2\x8c\x9a", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xe2\x8c\x9a",
        { "\xe2\x8c\x9a\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe2\x8c\x9a\xcc\x80",
        { "\xe2\x8c\x9a\xcc\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xcc\x80",
        { "\xe2\x8c\x9a\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe2\x8c\x9a\xe2\x80\x8d",
        { "\xe2\x8c\x9a\xe2\x80\x8d" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xe2\x80\x8d",
        { "\xe2\x8c\x9a\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] WATCH (ExtPict) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe2\x8c\x9a\xcd\xb8",
        { "\xe2\x8c\x9a", "\xcd\xb8" }
    },
    {
        "  - [0.2] WATCH (ExtPict) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe2\x8c\x9a\xcc\x88\xcd\xb8",
        { "\xe2\x8c\x9a\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xcc\x80\x20",
        { "\xcc\x80", "\x20" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xcc\x80\xcc\x88\x20",
        { "\xcc\x80\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xcc\x80\x0d",
        { "\xcc\x80", "\x0d" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xcc\x80\xcc\x88\x0d",
        { "\xcc\x80\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xcc\x80\x0a",
        { "\xcc\x80", "\x0a" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xcc\x80\xcc\x88\x0a",
        { "\xcc\x80\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xcc\x80\x01",
        { "\xcc\x80", "\x01" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xcc\x80\xcc\x88\x01",
        { "\xcc\x80\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xcc\x80\xcd\x8f",
        { "\xcc\x80\xcd\x8f" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xcc\x80\xcc\x88\xcd\x8f",
        { "\xcc\x80\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xcc\x80\xf0\x9f\x87\xa6",
        { "\xcc\x80", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xcc\x80\xcc\x88\xf0\x9f\x87\xa6",
        { "\xcc\x80\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xcc\x80\xd8\x80",
        { "\xcc\x80", "\xd8\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xcc\x80\xcc\x88\xd8\x80",
        { "\xcc\x80\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xcc\x80\xe0\xa4\x83",
        { "\xcc\x80\xe0\xa4\x83" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xcc\x80\xcc\x88\xe0\xa4\x83",
        { "\xcc\x80\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xcc\x80\xe1\x84\x80",
        { "\xcc\x80", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xcc\x80\xcc\x88\xe1\x84\x80",
        { "\xcc\x80\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xcc\x80\xe1\x85\xa0",
        { "\xcc\x80", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xcc\x80\xcc\x88\xe1\x85\xa0",
        { "\xcc\x80\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xcc\x80\xe1\x86\xa8",
        { "\xcc\x80", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xcc\x80\xcc\x88\xe1\x86\xa8",
        { "\xcc\x80\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xcc\x80\xea\xb0\x80",
        { "\xcc\x80", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xcc\x80\xcc\x88\xea\xb0\x80",
        { "\xcc\x80\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xcc\x80\xea\xb0\x81",
        { "\xcc\x80", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xcc\x80\xcc\x88\xea\xb0\x81",
        { "\xcc\x80\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xcc\x80\xe2\x8c\x9a",
        { "\xcc\x80", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xcc\x80\xcc\x88\xe2\x8c\x9a",
        { "\xcc\x80\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xcc\x80\xcc\x80",
        { "\xcc\x80\xcc\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xcc\x80\xcc\x88\xcc\x80",
        { "\xcc\x80\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xcc\x80\xe2\x80\x8d",
        { "\xcc\x80\xe2\x80\x8d" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xcc\x80\xcc\x88\xe2\x80\x8d",
        { "\xcc\x80\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xcc\x80\xcd\xb8",
        { "\xcc\x80", "\xcd\xb8" }
    },
    {
        "  - [0.2] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xcc\x80\xcc\x88\xcd\xb8",
        { "\xcc\x80\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xe2\x80\x8d\x20",
        { "\xe2\x80\x8d", "\x20" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\x20",
        { "\xe2\x80\x8d\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe2\x80\x8d\x0d",
        { "\xe2\x80\x8d", "\x0d" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\x0d",
        { "\xe2\x80\x8d\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe2\x80\x8d\x0a",
        { "\xe2\x80\x8d", "\x0a" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\x0a",
        { "\xe2\x80\x8d\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe2\x80\x8d\x01",
        { "\xe2\x80\x8d", "\x01" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\x01",
        { "\xe2\x80\x8d\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe2\x80\x8d\xcd\x8f",
        { "\xe2\x80\x8d\xcd\x8f" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xcd\x8f",
        { "\xe2\x80\x8d\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe2\x80\x8d\xf0\x9f\x87\xa6",
        { "\xe2\x80\x8d", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xf0\x9f\x87\xa6",
        { "\xe2\x80\x8d\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe2\x80\x8d\xd8\x80",
        { "\xe2\x80\x8d", "\xd8\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xd8\x80",
        { "\xe2\x80\x8d\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe2\x80\x8d\xe0\xa4\x83",
        { "\xe2\x80\x8d\xe0\xa4\x83" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xe0\xa4\x83",
        { "\xe2\x80\x8d\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe2\x80\x8d\xe1\x84\x80",
        { "\xe2\x80\x8d", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xe1\x84\x80",
        { "\xe2\x80\x8d\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe2\x80\x8d\xe1\x85\xa0",
        { "\xe2\x80\x8d", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xe1\x85\xa0",
        { "\xe2\x80\x8d\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe2\x80\x8d\xe1\x86\xa8",
        { "\xe2\x80\x8d", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xe1\x86\xa8",
        { "\xe2\x80\x8d\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe2\x80\x8d\xea\xb0\x80",
        { "\xe2\x80\x8d", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xea\xb0\x80",
        { "\xe2\x80\x8d\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe2\x80\x8d\xea\xb0\x81",
        { "\xe2\x80\x8d", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xea\xb0\x81",
        { "\xe2\x80\x8d\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe2\x80\x8d\xe2\x8c\x9a",
        { "\xe2\x80\x8d", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xe2\x8c\x9a",
        { "\xe2\x80\x8d\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe2\x80\x8d\xcc\x80",
        { "\xe2\x80\x8d\xcc\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xcc\x80",
        { "\xe2\x80\x8d\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe2\x80\x8d\xe2\x80\x8d",
        { "\xe2\x80\x8d\xe2\x80\x8d" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xe2\x80\x8d",
        { "\xe2\x80\x8d\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe2\x80\x8d\xcd\xb8",
        { "\xe2\x80\x8d", "\xcd\xb8" }
    },
    {
        "  - [0.2] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xe2\x80\x8d\xcc\x88\xcd\xb8",
        { "\xe2\x80\x8d\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] SPACE (Other) - [0.3]",
        "\xcd\xb8\x20",
        { "\xcd\xb8", "\x20" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xcd\xb8\xcc\x88\x20",
        { "\xcd\xb8\xcc\x88", "\x20" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xcd\xb8\x0d",
        { "\xcd\xb8", "\x0d" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <CARRIAGE RETURN (CR)> (CR) - [0.3]",
        "\xcd\xb8\xcc\x88\x0d",
        { "\xcd\xb8\xcc\x88", "\x0d" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xcd\xb8\x0a",
        { "\xcd\xb8", "\x0a" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <LINE FEED (LF)> (LF) - [0.3]",
        "\xcd\xb8\xcc\x88\x0a",
        { "\xcd\xb8\xcc\x88", "\x0a" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xcd\xb8\x01",
        { "\xcd\xb8", "\x01" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [5.0] <START OF HEADING> (Control) - [0.3]",
        "\xcd\xb8\xcc\x88\x01",
        { "\xcd\xb8\xcc\x88", "\x01" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xcd\xb8\xcd\x8f",
        { "\xcd\xb8\xcd\x8f" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAPHEME JOINER (Extend) - [0.3]",
        "\xcd\xb8\xcc\x88\xcd\x8f",
        { "\xcd\xb8\xcc\x88\xcd\x8f" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xcd\xb8\xf0\x9f\x87\xa6",
        { "\xcd\xb8", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) - [0.3]",
        "\xcd\xb8\xcc\x88\xf0\x9f\x87\xa6",
        { "\xcd\xb8\xcc\x88", "\xf0\x9f\x87\xa6" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xcd\xb8\xd8\x80",
        { "\xcd\xb8", "\xd8\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] ARABIC NUMBER SIGN (Prepend) - [0.3]",
        "\xcd\xb8\xcc\x88\xd8\x80",
        { "\xcd\xb8\xcc\x88", "\xd8\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xcd\xb8\xe0\xa4\x83",
        { "\xcd\xb8\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [0.3]",
        "\xcd\xb8\xcc\x88\xe0\xa4\x83",
        { "\xcd\xb8\xcc\x88\xe0\xa4\x83" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xcd\xb8\xe1\x84\x80",
        { "\xcd\xb8", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xcd\xb8\xcc\x88\xe1\x84\x80",
        { "\xcd\xb8\xcc\x88", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xcd\xb8\xe1\x85\xa0",
        { "\xcd\xb8", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JUNGSEONG FILLER (V) - [0.3]",
        "\xcd\xb8\xcc\x88\xe1\x85\xa0",
        { "\xcd\xb8\xcc\x88", "\xe1\x85\xa0" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xcd\xb8\xe1\x86\xa8",
        { "\xcd\xb8", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL JONGSEONG KIYEOK (T) - [0.3]",
        "\xcd\xb8\xcc\x88\xe1\x86\xa8",
        { "\xcd\xb8\xcc\x88", "\xe1\x86\xa8" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xcd\xb8\xea\xb0\x80",
        { "\xcd\xb8", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GA (LV) - [0.3]",
        "\xcd\xb8\xcc\x88\xea\xb0\x80",
        { "\xcd\xb8\xcc\x88", "\xea\xb0\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xcd\xb8\xea\xb0\x81",
        { "\xcd\xb8", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] HANGUL SYLLABLE GAG (LVT) - [0.3]",
        "\xcd\xb8\xcc\x88\xea\xb0\x81",
        { "\xcd\xb8\xcc\x88", "\xea\xb0\x81" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xcd\xb8\xe2\x8c\x9a",
        { "\xcd\xb8", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] WATCH (ExtPict) - [0.3]",
        "\xcd\xb8\xcc\x88\xe2\x8c\x9a",
        { "\xcd\xb8\xcc\x88", "\xe2\x8c\x9a" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xcd\xb8\xcc\x80",
        { "\xcd\xb8\xcc\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] COMBINING GRAVE ACCENT (Extend_ExtCccZwj) - [0.3]",
        "\xcd\xb8\xcc\x88\xcc\x80",
        { "\xcd\xb8\xcc\x88\xcc\x80" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xcd\xb8\xe2\x80\x8d",
        { "\xcd\xb8\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\xcd\xb8\xcc\x88\xe2\x80\x8d",
        { "\xcd\xb8\xcc\x88\xe2\x80\x8d" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xcd\xb8\xcd\xb8",
        { "\xcd\xb8", "\xcd\xb8" }
    },
    {
        "  - [0.2] <reserved-0378> (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] <reserved-0378> (Other) - [0.3]",
        "\xcd\xb8\xcc\x88\xcd\xb8",
        { "\xcd\xb8\xcc\x88", "\xcd\xb8" }
    },
    {
        "  - [0.2] <CARRIAGE RETURN (CR)> (CR) + [3.0] <LINE FEED (LF)> (LF) - [4.0] LATIN SMALL LETTER A (Other) - [5.0] <LINE FEED (LF)> (LF) - [4.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [0.3]",
        "\x0d\x0a\x61\x0a\xcc\x88",
        { "\x0d\x0a", "\x61", "\x0a", "\xcc\x88" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [0.3]",
        "\x61\xcc\x88",
        { "\x61\xcc\x88" }
    },
    {
        "  - [0.2] SPACE (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] ARABIC LETTER NOON (Other) - [0.3]",
        "\x20\xe2\x80\x8d\xd9\x86",
        { "\x20\xe2\x80\x8d", "\xd9\x86" }
    },
    {
        "  - [0.2] ARABIC LETTER NOON (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] SPACE (Other) - [0.3]",
        "\xd9\x86\xe2\x80\x8d\x20",
        { "\xd9\x86\xe2\x80\x8d", "\x20" }
    },
    {
        "  - [0.2] HANGUL CHOSEONG KIYEOK (L) + [6.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xe1\x84\x80\xe1\x84\x80",
        { "\xe1\x84\x80\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GA (LV) + [7.0] HANGUL JONGSEONG KIYEOK (T) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xea\xb0\x80\xe1\x86\xa8\xe1\x84\x80",
        { "\xea\xb0\x80\xe1\x86\xa8", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] HANGUL SYLLABLE GAG (LVT) + [8.0] HANGUL JONGSEONG KIYEOK (T) - [999.0] HANGUL CHOSEONG KIYEOK (L) - [0.3]",
        "\xea\xb0\x81\xe1\x86\xa8\xe1\x84\x80",
        { "\xea\xb0\x81\xe1\x86\xa8", "\xe1\x84\x80" }
    },
    {
        "  - [0.2] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [12.0] REGIONAL INDICATOR SYMBOL LETTER B (RI) - [999.0] REGIONAL INDICATOR SYMBOL LETTER C (RI) - [999.0] LATIN SMALL LETTER B (Other) - [0.3]",
        "\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7\xf0\x9f\x87\xa8\x62",
        { "\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7", "\xf0\x9f\x87\xa8", "\x62" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [13.0] REGIONAL INDICATOR SYMBOL LETTER B (RI) - [999.0] REGIONAL INDICATOR SYMBOL LETTER C (RI) - [999.0] LATIN SMALL LETTER B (Other) - [0.3]",
        "\x61\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7\xf0\x9f\x87\xa8\x62",
        { "\x61", "\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7", "\xf0\x9f\x87\xa8", "\x62" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [13.0] REGIONAL INDICATOR SYMBOL LETTER B (RI) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER C (RI) - [999.0] LATIN SMALL LETTER B (Other) - [0.3]",
        "\x61\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7\xe2\x80\x8d\xf0\x9f\x87\xa8\x62",
        { "\x61", "\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7\xe2\x80\x8d", "\xf0\x9f\x87\xa8", "\x62" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] REGIONAL INDICATOR SYMBOL LETTER B (RI) + [13.0] REGIONAL INDICATOR SYMBOL LETTER C (RI) - [999.0] LATIN SMALL LETTER B (Other) - [0.3]",
        "\x61\xf0\x9f\x87\xa6\xe2\x80\x8d\xf0\x9f\x87\xa7\xf0\x9f\x87\xa8\x62",
        { "\x61", "\xf0\x9f\x87\xa6\xe2\x80\x8d", "\xf0\x9f\x87\xa7\xf0\x9f\x87\xa8", "\x62" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) - [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) + [13.0] REGIONAL INDICATOR SYMBOL LETTER B (RI) - [999.0] REGIONAL INDICATOR SYMBOL LETTER C (RI) + [13.0] REGIONAL INDICATOR SYMBOL LETTER D (RI) - [999.0] LATIN SMALL LETTER B (Other) - [0.3]",
        "\x61\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7\xf0\x9f\x87\xa8\xf0\x9f\x87\xa9\x62",
        { "\x61", "\xf0\x9f\x87\xa6\xf0\x9f\x87\xa7", "\xf0\x9f\x87\xa8\xf0\x9f\x87\xa9", "\x62" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [0.3]",
        "\x61\xe2\x80\x8d",
        { "\x61\xe2\x80\x8d" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) - [999.0] LATIN SMALL LETTER B (Other) - [0.3]",
        "\x61\xcc\x88\x62",
        { "\x61\xcc\x88", "\x62" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.1] DEVANAGARI SIGN VISARGA (SpacingMark) - [999.0] LATIN SMALL LETTER B (Other) - [0.3]",
        "\x61\xe0\xa4\x83\x62",
        { "\x61\xe0\xa4\x83", "\x62" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) - [999.0] ARABIC NUMBER SIGN (Prepend) + [9.2] LATIN SMALL LETTER B (Other) - [0.3]",
        "\x61\xd8\x80\x62",
        { "\x61", "\xd8\x80\x62" }
    },
    {
        "  - [0.2] BABY (ExtPict) + [9.0] EMOJI MODIFIER FITZPATRICK TYPE-6 (Extend) - [999.0] BABY (ExtPict) - [0.3]",
        "\xf0\x9f\x91\xb6\xf0\x9f\x8f\xbf\xf0\x9f\x91\xb6",
        { "\xf0\x9f\x91\xb6\xf0\x9f\x8f\xbf", "\xf0\x9f\x91\xb6" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.0] EMOJI MODIFIER FITZPATRICK TYPE-6 (Extend) - [999.0] BABY (ExtPict) - [0.3]",
        "\x61\xf0\x9f\x8f\xbf\xf0\x9f\x91\xb6",
        { "\x61\xf0\x9f\x8f\xbf", "\xf0\x9f\x91\xb6" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.0] EMOJI MODIFIER FITZPATRICK TYPE-6 (Extend) - [999.0] BABY (ExtPict) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [11.0] OCTAGONAL SIGN (ExtPict) - [0.3]",
        "\x61\xf0\x9f\x8f\xbf\xf0\x9f\x91\xb6\xe2\x80\x8d\xf0\x9f\x9b\x91",
        { "\x61\xf0\x9f\x8f\xbf", "\xf0\x9f\x91\xb6\xe2\x80\x8d\xf0\x9f\x9b\x91" }
    },
    {
        "  - [0.2] BABY (ExtPict) + [9.0] EMOJI MODIFIER FITZPATRICK TYPE-6 (Extend) + [9.0] COMBINING DIAERESIS (Extend_ExtCccZwj) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [11.0] BABY (ExtPict) + [9.0] EMOJI MODIFIER FITZPATRICK TYPE-6 (Extend) - [0.3]",
        "\xf0\x9f\x91\xb6\xf0\x9f\x8f\xbf\xcc\x88\xe2\x80\x8d\xf0\x9f\x91\xb6\xf0\x9f\x8f\xbf",
        { "\xf0\x9f\x91\xb6\xf0\x9f\x8f\xbf\xcc\x88\xe2\x80\x8d\xf0\x9f\x91\xb6\xf0\x9f\x8f\xbf" }
    },
    {
        "  - [0.2] OCTAGONAL SIGN (ExtPict) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [11.0] OCTAGONAL SIGN (ExtPict) - [0.3]",
        "\xf0\x9f\x9b\x91\xe2\x80\x8d\xf0\x9f\x9b\x91",
        { "\xf0\x9f\x9b\x91\xe2\x80\x8d\xf0\x9f\x9b\x91" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] OCTAGONAL SIGN (ExtPict) - [0.3]",
        "\x61\xe2\x80\x8d\xf0\x9f\x9b\x91",
        { "\x61\xe2\x80\x8d", "\xf0\x9f\x9b\x91" }
    },
    {
        "  - [0.2] UPPER BLADE SCISSORS (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) + [11.0] UPPER BLADE SCISSORS (Other) - [0.3]",
        "\xe2\x9c\x81\xe2\x80\x8d\xe2\x9c\x81",
        { "\xe2\x9c\x81\xe2\x80\x8d\xe2\x9c\x81" }
    },
    {
        "  - [0.2] LATIN SMALL LETTER A (Other) + [9.0] ZERO WIDTH JOINER (ZWJ_ExtCccZwj) - [999.0] UPPER BLADE SCISSORS (Other) - [0.3]",
        "\x61\xe2\x80\x8d\xe2\x9c\x81",
        { "\x61\xe2\x80\x8d", "\xe2\x9c\x81" }
    }
};

#endif
