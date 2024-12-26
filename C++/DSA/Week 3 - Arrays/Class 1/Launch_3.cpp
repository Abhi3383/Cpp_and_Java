#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;

    printArray(arr, size);
}
bool find(int arr[], int size, int key)
{

    // linear search

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }

    // not present
    return false;
}

int main()
{
    int arr[500];

    int n;
    cout << "How many numbers you want to add in array" << endl;

    cin >> n;

    cout << "Enter the numbers " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // print doubles
    cout << "Doubles: ";
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i] << " ";
    }
    cout << endl;
    int arrx[5] = {1, 3, 5, 7, 9};

    for (int i = 0; i < 5; i++)
    {
        arrx[i] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arrx[i] << " ";
    }
    cout << endl;
    int arry[10] = {1, 2};

    for (int i = 0; i < 10; i++)
    {
        cout << arry[i] << " ";
    }

    int arrz[] = {5, 6};
    int size = 2;
    inc(arrz, size);

    printArray(arrz, size);
}