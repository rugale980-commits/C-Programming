#include <stdio.h>

int main()
{
    int No = 0;
    int i = 1;

    printf("Enter a number to print its multiplication table:\n");
    scanf("%d", &No);

    printf("Multiplication Table of %d:\n", No);

    while (i <= 20)
    {
        printf("%d x %d = %d\n", No, i, No * i);
        i++;
    }

    return 0;
}
