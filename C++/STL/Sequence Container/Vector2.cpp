#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_back(5);
    d.push_back(6);
    d.push_front(1);
    cout << "Elements" << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << endl;
    d.pop_back();
    cout << "After popping" << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "Print 1st INDEX element ->" << d.at(1) << endl;
    cout << "Front -> " << d.front() << endl;
    cout << "Back -> " << d.back() << endl;
    cout << "Empty or not -> " << d.empty() << endl;

    cout << "before erase -> " << d.size() << endl;
    // Only ".erase()" in deque will generate error we have to give from where we want to delete.
    // If we want to delete a single element or a range.
    d.erase(d.begin(), d.begin() + 1);
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << "after erase -> " << d.size() << endl;

    // Size means the number of elements in a data structure
    // after erase size become 0
    // but in your max size, max means the memory allocated to your deque, the starting and ending amounts are same
    return 0;
}