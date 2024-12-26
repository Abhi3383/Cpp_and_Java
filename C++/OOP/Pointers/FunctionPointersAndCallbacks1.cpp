// Function Pointers and callbacks

#include <stdio.h>

// call back function should compare 2 integers, should return 1 if first element has higher rank,
// 0 if elements are equal and -1 if second element has higher rank

int compare(int a, int b) // call back function
{
    if (a > b)
        return 1;
    else
        return -1;
}

void BubbleSort(int X[], int n, int (*compare)(int, int))
{
    int temp;
    // simple bubble sort
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (compare(X[j], X[j + 1]) > 0)
            { // Compare X[j] with X[j+1] and swap if needed
                temp = X[j];
                X[j] = X[j + 1];
                X[j + 1] = temp;
            }
        }
    }
}

void A()
{
    printf("Hello");
}

void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // call-back function that "ptr" points to
           // can also write (*ptr)();
}

int main()
{
    B(A); // A is callback function

    int X[] = {3, 2, 1, 5, 6, 4}; // sort in increasing order => {1,2,3,4,5,6}
    BubbleSort(X, 6, compare);
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}