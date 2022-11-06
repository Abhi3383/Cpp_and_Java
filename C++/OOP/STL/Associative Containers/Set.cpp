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

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
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
    return 0;
}