
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>

#define DECLARE(NAME)   \
    extern char*  test_##NAME##_title(); \
    extern size_t test_##NAME##_num(); \
    extern size_t test_##NAME##_run(FILE, FILE, size_t, size_t); 

#define IMPORT(NAME)     \
    (void*) test_##NAME##_title, \
    (void*) test_##NAME##_num,   \
    (void*) test_##NAME##_run

DECLARE(ucCodepoint)
DECLARE(ucCpReader)
DECLARE(ucGcReader)
DECLARE(ucp)

void* (*tests[]) () =
{
    IMPORT(ucCodepoint),
    IMPORT(ucCpReader),
    IMPORT(ucGcReader),
    IMPORT(ucp),
};

#define NUM_IMPORTS (sizeof(tests)/sizeof(tests[0]))

int main(int argc, char* argv[])
{
    size_t fail = 0;
    size_t numTests = 0;
    size_t exectued = 0;
    size_t numTestCase = 0;
    size_t numTestCaseRel = 0;
    size_t numTestCaseSuite = 0;

    if (argc > 1)
    {
        long int num = strtol(argv[1], NULL, 10);

        if (num <= 0)
        {
            fprintf(stderr, "Usage: %s numTestCase\n", argv[0]);
            return EXIT_FAILURE;
        }

        numTestCase = (size_t) num;
    }

    for (size_t i = 2; i < NUM_IMPORTS; i += 3)
    {
        size_t numTestsInSuite = (size_t)tests[i - 1]();
        size_t numTestsNew = numTests + numTestsInSuite;
                
        if ((numTestCase > 0) && (numTestCase >= numTests) && (numTestCase <= numTestsNew))
        {
            numTestCaseSuite = i;
            numTestCaseRel = numTestCase - numTests - 1;
        }

        numTests = numTestsNew;
    }

    if (numTestCase > numTests)
    {
        fprintf(stderr, "requested test case %zu out of range (%zu) \n", numTestCase, numTests);
        return EXIT_FAILURE;
    }

    if (numTestCase > 0)
    {
        numTests = 1;
    }

    fprintf(stdout, "TAP version 13\n");
    fprintf(stdout, "1..%zu\n", numTests);

    if (numTestCase == 0)
    {
        /* run all test cases */
        for (size_t i = 2; i < NUM_IMPORTS; i += 3)
        {
            printf("#\n# %s\n#\n", (char*) tests[i - 2]());
            size_t numTestsRun = (size_t)tests[i - 1]();

            for (size_t j = 0; j < numTestsRun; j++)
            {
                fail += (size_t)tests[i](stdout, stderr, exectued + 1 + j, j);
            }

            exectued += numTestsRun;
        }
    }
    else
    {
        printf("#\n# %s\n#\n", (char*)tests[numTestCaseSuite - 2]());
        fail += (size_t)tests[numTestCaseSuite](stdout, stderr, numTestCase, numTestCaseRel);
    }

    printf("\nTest result: %zu executed / %zu failed / %.2f success\n", numTests, fail, ((float)((numTests - fail) * 100) / (float)numTests));

    return EXIT_SUCCESS;
}
