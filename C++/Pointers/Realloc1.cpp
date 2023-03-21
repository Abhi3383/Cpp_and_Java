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
    printf("\n");

    // it will create a new memory block of suze 2*n and copy the values in the
    // previous memory block into this new memory block.
    // How realloc works is that if the size of the new block is ggreater than the
    // size of the previous block, then if it is possible to extend the previous find some
    // consecutive memory with the same block iteself is extended.
    // Else, a new block is allocated and the content from the previous block is copied and
    // the previous block is deallocated

    int *B = (int *)realloc(A, 2 * n * sizeof(int));
    printf("\nPrev block address = %d, new address = %d\n", A, B);

    // After Reallocation of memory
    for (int i = 0; i < 2 * n; i++)
    {
        printf("\nAfter Reallocation of memory : %d ", B[i]);
    }
    printf("\n");

    int *C = (int *)realloc(A, (n / 2) * sizeof(int));
    printf("\nPrev block address = %d, new address = %d\n", A, C);

    // After Reallocation of memory
    for (int i = 0; i < n; i++)
    {
        printf("\nAfter Reallocation of memory : %d ", C[i]);
    }
    printf("\n");

    return 0;
}