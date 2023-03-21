// Set always store a unique element
// here , insert , find , erase and count , the complexity of all these functions are O(logn)
// Other than that to do begin , size , end and empty all these have complexity 0 ( 1 ) .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
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

    set<int>::iterator x;
    cout << "Printing unique values in ascending order" << endl;
    for (x = s.begin(); x != s.end(); x++)
    {
        cout << *x << " ";
    }
    cout << endl;
    // copying element in another set
    // copying element in stack_name(from,till);
    set<int> s1(s.begin(), s.end());
    cout << "Copied elemets in s1 are : " << endl;
    for (x = s1.begin(); x != s1.end(); x++)
    {
        cout << *x << " ";
    }
    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    cout << "After removing a value" << endl;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not : " << s.count(5) << endl;
    cout << "-5 is present or not : " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);

    cout << "Value present at itr -> " << *it << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // to get the values in descending order
    set<int, greater<int>> p;
    p.insert(6);
    p.insert(0);
    p.insert(0);
    p.insert(0);
    p.insert(5);
    p.insert(5);
    set<int, greater<int>>::iterator y;
    cout << "Printing unique values in descending order" << endl;
    for (y = p.begin(); y != p.end(); y++)
    {
        cout << *y << " ";
    }
    cout << endl;
    return 0;
}