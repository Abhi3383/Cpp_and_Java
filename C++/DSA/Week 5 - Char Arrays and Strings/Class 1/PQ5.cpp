#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[])
{
    int i = 0;
    int length = 0;

    while (arr[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void convertIntoUpperCase(char arr[])
{
    int n = getLength(arr);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}

int main()
{
    char arr[100] = "babbar";
    convertIntoUpperCase(arr);
    cout << arr << endl;

    return 0;
}