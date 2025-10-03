#include <stdio.h>
int Addition(int iNo1, int iNo2)
{
    int Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}
int Substraction(int iNo1, int iNo2)
{
    int Ans = 0;
    Ans = iNo1 - iNo2;
    return Ans;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    int iret = 0;

    printf("Enter a two Number\n");
    scanf("%d %d", &iNo1, &iNo2);

    iret = Addition(iNo1, iNo2);
    printf("Addition is : %d\n", iret);

    iret = Substraction(iNo1, iNo2);
    printf("Substraction is : %d\n", iret);

    return 0;
}