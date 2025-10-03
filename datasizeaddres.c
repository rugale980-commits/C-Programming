#include <stdio.h>

int main()
{
    char cvalue = 's';
    int ivalue = 11;
    float fvalue = 90.78f;
    double dvalue = 98.4623;

    printf("Size of character is : %c\n", cvalue);
    printf("Size of interger is :%d\n", ivalue);
    printf("Size of flaot is :%f\n", fvalue);
    printf("Size of double is :%lf\n", dvalue);

    printf("Adress of cvalue is : %lu\n", &cvalue);
    printf("Adress of ivalue is : %lu\n", &ivalue);
    printf("Adress of fvalue is : %lu\n", &fvalue);
    printf("Adress of dvalue is : %lu\n", &dvalue);

    return 0;
}