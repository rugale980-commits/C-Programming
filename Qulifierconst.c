#include <stdio.h>

int main()
{
    int iNo1 = 10;
    const int iNo2 = 20;

    // Below lines generates erroes

    iNo1++; // iNO1 = iNO + 1;
    iNo2++; // iNo2 = iNO2 + 1;
    iNo2 = 30;

    return 0;
}