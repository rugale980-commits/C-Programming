#include <stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj;

    struct Demo obj;
    struct Demo *p = &obj;

    p->= 11;
    p->= 90.4f;
    p->= 21;

    printf("%d\n", p->i);
    printf("%d\n", p->f);
    printf("%d\n", p->j);

    return 0;
}