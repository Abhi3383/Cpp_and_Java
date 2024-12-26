// Function Pointers and call backs

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int A = *((int *)a); // typecasting to int* and getting value
    int B = *((int *)b);
    return abs(A) - abs(B);
}

int main()
{
    int i, A[] = {-31, 22, -1, 50, -6, 4}; // =>{-1,4,-6,22,-31,50}
    qsort(A, 6, sizeof(int), compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
}