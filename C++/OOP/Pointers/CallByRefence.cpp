#include <stdio.h>
#include <stdlib.h>

int Add(int *a, int *b)
{ // Called function
    // a and b pointer to integers local to ADD
    printf("\nAddress of a in Add = %d , Address of b in Add = %d\n", &a, &b);
    printf("\nValue of a of Add (address of a of main) = %d, Value of b of Add (address of b of main) = %d\n", a, b);
    printf("\nValue at address stored in a of Add = %d, Value at address stored in b of Add = %d\n", *a, *b);
    int c = *a + *b;
    return c;
}

int main()
{ // Calling function
    // x,y,z are local variabels
    int a = 2, b = 4;
    printf("\nAddress of a in main = %d , Address of b in main = %d\n", &a, &b);

    // Call by Refrence
    int z = Add(&a, &b); // a and b are integers local to main.
    printf("\nSum  = %d\n", z);
}