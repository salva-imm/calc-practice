#include <stdio.h>
#include "common.h"

// extern long ISum;
// extern long ICount;

int main(int argc, char const *argv[])
{
    printf("first ISum: %d, first ICount %d \n",ISum, ICount);
    sumInt(20);
    printf("second ISum: %d, second ICount %d\n",ISum, ICount);
    return 0;
}

