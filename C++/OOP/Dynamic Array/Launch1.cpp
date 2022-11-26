#include <bits/stdc++.h>
using namespace std;

class Array
{
    int a[100];
    int size = 0;

public:
    void insert(int index, int value)
    {
        a[index] = value;
        size++;
    }

    int get(int index)
    {
        return a[index];
    }
    int getSize()
    {
        return size;
    }
    int search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (a[i] == value)
                return i;
        }
        return -1;
    }
    void del(int index)
    {
        for (int i = index; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[size - 1] = 0;
        size--;
    }
    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
    }
};

int main()
{
    int n, x, value;
    Array a;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Enter " << n << " elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(i, x);
    }
    cout << "Elements are ";
    a.printArray();

    cout << "\nEnter the element u want to search" << endl;
    cin >> value;
    int index = a.search(value);
    if (index != -1)
    {
        cout << "Value found at " << index << endl;
    }
    else
    {
        cout << "Value not found";
    }
    cout << "Which index u want to delete " << endl;
    cin >> index;
    a.del(index);
    a.printArray();
    return 0;
}