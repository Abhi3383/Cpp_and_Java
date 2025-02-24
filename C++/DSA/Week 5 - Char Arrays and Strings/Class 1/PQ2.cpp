#include <bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void reverseCharArray(char name[])
{
    int i = 0;
    int n = getLength(name);
    int j = n - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main()
{
    char arr[100];
    // cin >> arr;
    // getline(cin, arr);
    cout<<"i/p of a line : ";
    cin.getline(arr, 50);

    cout<<"o/p of a line : ";
    cout << arr<<endl;
    cout << "#################################################" << endl;

    char name[100];
    cin >> name;

    cout << "length is: " << getLength(name) << endl;
    cout << "Length is -> " << strlen(name) << endl;

    cout << "Initially: " << name << endl;
    reverseCharArray(name);
    cout << "After reversal process: " << name << endl;

    return 0;
}