#include <stdio.h>
int main()
{
    int istd = 0;

    printf("Enter Your Standard \n");
    scanf("%d", &istd);

    if (istd == 1)
    {
        printf("Exam at 9 Am");
    }
    else if (istd == 2)
    {
        printf("Exam at 10 Am");
    }
    else if (istd == 3)
    {
        printf("Exams is at 11 Am");
    }
    else
    {
        printf("Invalid syntax");
    }
}
