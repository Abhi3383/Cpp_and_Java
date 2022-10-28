#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b)
{ // Called function
    printf("\nAddress of a in Add = %d , Address of b in Add = %d\n", &a, &b);
    int c = a + b;
    return c;
}

int main()
{ // Calling function
    // x,y,z are local variabels
    int a = 2, b = 4;
    printf("\nAddress of a in Add = %d , Address of b in Add = %d\n", &a, &b);

    // Call by value
    int z = Add(a, b); // value of a of main is copied to a of Add.
                       // value of a of main is copied to b of Add.
    printf("\nSum  = %d\n", z);
}