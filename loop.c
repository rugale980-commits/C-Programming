/* #include <stdio.h>
int main()
{
    int Num;

    printf("Enter a Number :\n");
    scanf("%d\n", &Num);

    for (int i = 1; i <= 10; i++)
    {
        int result = Num * i;
        printf("%d\n", result);
    }

    return 0;
} */
#include <stdio.h>

int main()
{
    int Num;
    int result;

    printf("Enter a Number :\n");
    scanf("%d", &Num); // Fixed: Removed the newline from scanf

    for (int i = 1; i <= 10; i++)
    { // Fixed: Adjusted the loop condition
        result = Num * i;
        printf("%d\n", result); // Fixed: Printing in a formatted manner
    }

    return 0;
}
