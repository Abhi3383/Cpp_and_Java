#include <bits/stdc++.h>
using namespace std;

// List implementation is due to the doubly-linked list
int main()
{
    list<int> n(5, 100);
    cout << "Elements in list n-> " << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> l;
    cout << "Elements in list d-> " << endl;
    for (int i = 0; i < 5; i++)
    {
        l.push_back(i * 100);
    }
    cout << endl;
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl
         << endl;

    l.push_front(10);
    cout << "Front element : " << l.front() << endl;
    l.push_back(50);
    cout << "Back element : " << l.back() << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n\n";

    l.pop_front();
    cout << "Front element after pop_front : " << l.front() << endl;
    l.pop_back();
    cout << "Back element after pop_back: " << l.back() << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n\n";

    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list -> " << l.size() << endl;
    cout << "\n";

    forward_list<int> l1;
    cout << "Forward list : " << endl;

    // 1. method to assign
    l1.assign({1, 2, 3, 4, 5});
    forward_list<int>::iterator iti;
    for (iti = l1.begin(); iti != l1.end(); iti++)
    {
        cout << *iti << " ";
    }
    cout << "\n\n";
    forward_list<int> l2;
    cout << "Forward list : " << endl;
    // 2. method to assign
    l2.assign(5, 10);
    forward_list<int>::iterator itie;
    for (itie = l2.begin(); itie != l2.end(); itie++)
    {
        cout << *itie << " ";
    }

    cout << "\n\n";
    forward_list<int> l3;
    cout << "Forward list : " << endl;
    // 2. method to assign
    l3.assign(5, 10);
    for (itie = l3.begin(); itie != l3.end(); itie++)
    {
        cout << *itie << " ";
    }

    cout << "\n\n";
    cout << "Insert_after : " << endl;
    itie = l3.begin();
    itie++;
    l3.insert_after(itie, {7, 8, 9});
    for (itie = l3.begin(); itie != l3.end(); itie++)
    {
        cout << *itie << " ";
    }
}