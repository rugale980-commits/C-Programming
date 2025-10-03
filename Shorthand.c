#include <stdio.h>

int main()
{
    int i = 10, j = 10;
    int ians = 0, jans = 0;

    ians = i++;
    jans = ++j;

    printf("value of i : %d\n", j);       // 11
    printf("value of ians : %d\n", jans); // 10

    printf("value of i : %d\n", j);       // 11
    printf("value of jans : %d\n", jans); // 11
    return 0;
}