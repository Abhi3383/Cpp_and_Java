#include <stdio.h>

int main()
{
    // auto(by default) gets memory in RAM -> also by default it has garbage value
    auto int a = 11; // can wirte auto but no diffrence
    auto int b;
    float c;
    printf("%d %d %f\n", a, b, c);
    // local body
    {
        int a = 20, i;
        for (int i = 0; i < 3; i++)
        {
            printf("%d\t", a);
        }
        printf("\n");
    }
    printf("%d", a);

    printf("/n");

    // register
    int *p;
    // register is a request -> we are requesting to give space in register it might or might not get space in register
    // we can not use & operator in register
    register int x;
    printf("%d", x);
    p = &a;             // ❌ dont use &
    printf("\n%u", &a); // ❌ dont use &

    // we can not use more than one storage specifier for the same variable

    return 0;
}