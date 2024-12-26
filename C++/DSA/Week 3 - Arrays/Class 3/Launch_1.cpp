#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "size : " << size << endl;

    cout << "arr[2][2] : " << arr[2][2] << endl;
    
    for (auto i : arr)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}