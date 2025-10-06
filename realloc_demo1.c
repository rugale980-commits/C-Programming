#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *Arr = NULL;

    // step 1 : Allocate the memory

    Arr = (int *)malloc(5 * sizeof(int));

    // Step 2 : Use the memory

    Arr = (int *)realloc(Arr, 10 * sizeof(int));

    // Step 3 : Free the memory

    free(Arr);

    return 0;
}