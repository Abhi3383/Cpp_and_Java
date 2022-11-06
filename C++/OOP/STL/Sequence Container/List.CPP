#include <bits/stdc++.h>
using namespace std;

// List implementation is due to the doubly-linked list
int main()
{
    list<int> l;

    list<int> n(5, 100);
    cout << "Elements in list n-> " << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);
    cout << "Elements in list d-> " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list -> " << l.size() << endl;
}