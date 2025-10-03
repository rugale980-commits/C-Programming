#include <stdio.h>

int main()
{
    int i = 10;
    short int j = -10;
    long int k = +10;

    signed int a = 10;
    signed int b = -10;
    signed int c = +10;

    unsigned int x = 10;
    unsigned int y = +10;
    unsigned int z = -10;

    printf("%lu\n", x);
    printf("%lu\n", y);
    printf("%lu\n", z);

    return 0;
}