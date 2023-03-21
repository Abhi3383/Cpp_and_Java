#include <stdio.h>
#include <stdlib.h>

void PrintHello(char *name)
{
    printf("Hello %s\n", name);
}

int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int c;
    // pointer to function that should take (int,int) as args/parameter and return int
    // (int, int) this pointer will point
    int (*p)(int, int);
    p = &Add; // p = Add; ✅ function name will return us pointer in this case

    // We have used the Asterisk(*) operator to derefrence and get the function and then
    // we have passed args just like we would do with a function name.
    // c = *p(2, 3); ->declaring a function that would return int *
    c = (*p)(2, 3); // p(2, 3); ✅ derefrencing and executing the function
    printf("%d", c);
    printf("\n");
    void (*ptr)(char *);
    ptr = PrintHello;
    ptr("TOM");
    return 0;
}