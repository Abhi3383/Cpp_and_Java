#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of an array for MALLOC :\n");
    scanf("%d", &n);

    // 👉Malloc
    int *A = (int *)malloc(n * sizeof(int)); // dynamically allocated memory

    // before initalization of values it will print garbage as default
    for (int i = 0; i < n; i++)
    {
        printf("\nBefore initization : %d ", A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    printf("\n");
    // After initalization
    for (int i = 0; i < n; i++)
    {
        printf("\nAfter initalization : %d ", A[i]);
    }
    printf("\n");

    // to free the memory
    free(A);

    // After freeing
    for (int i = 0; i < n; i++)
    {
        printf("\nAfter freeing : %d ", A[i]);
    }
    printf("\n");

    // Even after freeing we can Allocate the memory
    A[1] = 10;
    A[4] = 9;
    for (int i = 0; i < n; i++)
    {
        printf("\nAfter reallocating : %d ", A[i]);
    }
    printf("\n");

    return 0;
}