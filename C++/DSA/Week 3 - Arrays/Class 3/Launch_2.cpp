#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<vector<int>> arrs)
{
    for (int i = 0; i < arrs.size(); i++)
    {
        for (int j = 0; j < arrs[i].size(); j++)
        {
            cout << arrs[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    // Initialize a 2D vector with the specified dimensions
    vector<vector<int>> arr(row, vector<int>(col, -8));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Display the elements of the 2D vector
    for (auto i : arr)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "enter the elements in the array: ";
    vector<vector<int>> arrs(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arrs[i][j];
        }
    }
    printArray(arrs);
    return 0;
}
