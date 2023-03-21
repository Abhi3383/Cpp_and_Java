#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(5);
    d.push_back(6);

    deque<int>::iterator it;
    for (it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "size = " << d.size() << endl;
    cout << "Max size = " << d.max_size() << endl;
    cout << "Front = " << d.front();
    cout << "At() = " << d.at(3) << endl;

    d.pop_back();
    cout << "size after pop = " << d.size() << endl;
    d.pop_front();
    cout << "Back = " << d.back();
    return 0;
}