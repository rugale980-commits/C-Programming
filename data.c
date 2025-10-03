#include <stdio.h>

int main()
{
    char cvalue = 's';
    int ivalue = 11;
    float fvalue = 90.78f;
    double dvalue = 98.4623;

    printf("%lu\n", cvalue);
    printf("%lu\n", ivalue);
    printf("%lu\n", fvalue);
    printf("%lu\n", dvalue);

    printf("size of character is : %d\n", sizeof(cvalue));
    printf("size of integer is : %d\n", sizeof(ivalue));
    printf("size of flaot is : %d\n", sizeof(fvalue));
    printf("size of double is : %d\n", sizeof(dvalue));

    return 0;
}