/*
 * Arrays are alwaya passed as refrence parameters.
   we cannot increment and decrement here like other pointer variables.
 */

#include <stdio.h>

int SumoFElements(int *A, int size)
{
    int i, sum = 0;
    printf("SOE - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (i = 0; i < size; i++)
    {
        sum += A[i]; // A[i] is *(A+i)
    }
    return sum;
}

void Double(int *A, int size) // int * A or int A[] its the same
{
    int i, sum = 0;
    printf("SOE - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    for (i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumoFElements(A, size);
    printf("Sum of elements = %d\n", total);
    printf("Main - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

    Double(A, size);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
}