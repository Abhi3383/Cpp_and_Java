#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("p = %d,*p = %d , **q = %d , ***r = %d \n\n", p, *p, **q, ***r);
    printf("q = %d,*q = %d , *(*q) = %d , **q = %d \n\n", q, *q, *(*q), **q);
    printf("r = %d,*r = %d , *(*r) = %d , *(**r) = %d, **r = %d,***r = %d \n", r, *r, *(*r), *(**r), **r, ***r);

    ***r = 10;
    printf("x = %d\n", x);

    **q = *p + 2;
    printf("x = %d\n", x);
    return 0;
}