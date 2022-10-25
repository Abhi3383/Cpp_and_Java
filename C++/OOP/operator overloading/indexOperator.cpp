// [] -> index
#include <bits/stdc++.h>
using namespace std;

class Array
{
    int a[100];
    int size;

public:
    Array()
    {
        size = 0;
    }

    int operator[](int index)
    {
        if (index > size)
        {
            cout << "Array index out of Bound Exception" << endl;
            exit(0);
        }
        return a[index];
    }

    void setArray(int n, int index)
    {
        a[index] = n;
    }

    void display(int index)
    {
        cout << a[index] << endl;
    }
};

int main()
{
    Array a;
    a.setArray(5, 10);
    a.display(10);
    // To make this line work we will do index operator overlaoding
    cout << a[10];
    return 0;
}