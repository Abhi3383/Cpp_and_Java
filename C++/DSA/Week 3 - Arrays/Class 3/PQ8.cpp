#include <iostream>
using namespace std;
void rowSumArray(int arr[][3], int row, int col)
{

    int sum = 0;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "sum : " << sum << endl;
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    rowSumArray(arr, row, col);
}