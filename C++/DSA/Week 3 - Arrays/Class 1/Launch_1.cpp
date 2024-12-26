#include <bits/stdc++.h>
using namespace std;

int main()
{
  // array declare
  int arr[7];
  cout << arr << endl;
  cout << &arr << endl;

  cout << "Array created successfully" << endl;

  int ans = (sizeof(arr) / sizeof(int));
  cout << ans << endl;

  // array initialise
  int brr[] = {2, 4, 6, 8, 10};
  int crr[10] = {2, 4, 6, 8, 10};
  // errror
  // int drr[4] = {2,4,6,8,10};

  cout << "Array initialised successfully" << endl;

  int arrs[] = {1, 3, 5, 7, 9};

  // printing all values
  for (int index = 0; index < 5; index++)
  {
    cout << arrs[index] << " ";
  }

  int arrx[10] = {0};

  for (int i = 0; i < 10; i++)
  {
    cout << arrx[i] << " ";
  }

  return 0;
}