
#include "../../uc8str.h"

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define FOPEN(FILEPTR, FILENAME, MODES)                             \
    FILEPTR = fopen(FILENAME, MODES);                               \
                                                                    \
    if(!FILEPTR)                                                    \
    {                                                               \
        fprintf(stderr, "Error: %d (%s)\n", errno, strerror(errno));         \
        return EXIT_FAILURE;                                        \
    }                                                               \


int main(int argc, char *argv[])
{
    char *input, *output;
    FILE *fInput, *fOutput;

    if(argc < 3)
    {
        fprintf(stderr, "Usage: %s input ouput", argv[0]);
    }

    input  = argv[1];
    output = argv[2];

    FOPEN(fInput, input, 'r');
    FOPEN(fInput, input, 'w');

    

    return EXIT_SUCCESS;
}