#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of an array for REALLOC :\n");
    scanf("%d", &n);
    // 👉ReAlloc
    int *A = (int *)malloc(n * sizeof(int)); // dynamically allocated memory

    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    int *B = (int *)realloc(NULL, n * sizeof(int)); // equivalent to malloc
    printf("Using realloc as Malloc");
    printf("\nPrev block address = %d, new address = %d\n", A, B);

    // After Reallocation of memory
    for (int i = 0; i < n; i++)
    {
        printf("\nAfter Reallocation of memory : %d ", B[i]);
    }
    printf("\n");

    int *D = (int *)realloc(A, 0); // equivalent to free(A)
    printf("Using realloc as free");
    printf("\nPrev block address = %d, new address = %d\n", A, D);

    // After Reallocation of memory
    for (int i = 0; i < n; i++)
    {
        printf("\nAfter Reallocation of memory : %d ", D[i]);
    }
    printf("\n");

    return 0;
}