#include <stdint.h>
#include <stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of elements\n");
    scanf("%d\n", &length);

    // step 1 : Allocate the memory
    Arr = (int *)calloc(length * sizeof(int));
    if (Arr == NUl)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("memory gets sucessfully allocated\n");
    }
    // Step 2 : Use the memory

    // Step 3 : Free the memory
    free(Arr);
    return 0;
}