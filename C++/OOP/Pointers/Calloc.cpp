#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 👉Calloc
    int p;
    printf("\nEnter the size of an array for CALLOC : \n");
    scanf("%d", &p);
    int *B = (int *)calloc(p, sizeof(int)); // dynamically allocated memory

    // before initalization of values it will print 0 as default
    for (int i = 0; i < p; i++)
    {
        printf("\nBefore initalization : %d ", B[i]);
    }

    for (int i = 0; i < p; i++)
    {
        B[i] = i + 1;
    }
    printf("\n");

    // After initalization
    for (int i = 0; i < p; i++)
    {
        printf("\nAfter initalization :%d ", B[i]);
    }
    printf("\n");

    // to free the memory
    free(B);

    // After freeing
    for (int i = 0; i < p; i++)
    {
        printf("\nAfter freeing : %d ", B[i]);
    }
    printf("\n");
    // Even after freeing we can reAllocate the memory
    B[0] = 5;
    B[6] = 7;
    for (int i = 0; i < p; i++)
    {
        printf("\nAfter reallocating : %d ", B[i]);
    }
    printf("\n");

    return 0;
}