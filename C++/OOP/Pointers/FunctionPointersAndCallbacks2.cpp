// Function Pointers and callbacks

#include <stdio.h>
#include <math.h>

int absolute_compare(int a, int b) // call back function
{
    if (abs(a) > abs(b))
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
            if (absolute_compare(X[j], X[j + 1]) > 0)
            { // Compare X[j] with X[j+1] and swap if needed
                temp = X[j];
                X[j] = X[j + 1];
                X[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int X[] = {-31, 22, -1, 50, -6, 4}; // sort in increasing order =>{-1,4,-6,22,-31,50}
    BubbleSort(X, 6, absolute_compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}