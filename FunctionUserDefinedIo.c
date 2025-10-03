#include <stdio.h>

int Division(no1, no2)
{
    int div = 0;
    div = no1 / no2;
    return div;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    int ans = 0;

    printf("Enter first number\n");
    scanf("%d", &ivalue1);

    printf("Enter second number\n");
    scanf("%d", &ivalue2);

    ans = Division(ivalue1, ivalue2);
    printf("Division is %d", ans);

    return 0;
}