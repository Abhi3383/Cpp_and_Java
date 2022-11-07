// multiSet dosent store a unique element unlike set which stores unique element

#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(5);
    s.insert(5);

    multiset<int>::iterator x;
    cout << "Printing values in ascending order" << endl;
    for (x = s.begin(); x != s.end(); x++)
    {
        cout << *x << " ";
    }
    cout << endl;

    return 0;
}