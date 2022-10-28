#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld()
{
    printf("Hello world\n");
}

int *Add(int *a, int *b) // Called function - returns pointer to integer
{
    // int c = (*a) + (*b); this line will create problem bcz the memory for it will be created in STACK
    // but after performing the function it will be deallocated and in that memory if another function
    // gets storage it will create probelem beacuse function calls execution involves storage of some information.
    // So the data storage of previous call and data storge of new call we be overwritten. We get some garabge value
    // To solve this problem we will use malloc which will create memory dymamically in HEAP

    int *c = (int *)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int main()
{ // calling function
    int a = 2, b = 4;
    int *ptr = Add(&a, &b); // a and b are integers local to main
    PrintHelloWorld();
    printf("Sum = %d\n", *ptr);
    return 0;
}