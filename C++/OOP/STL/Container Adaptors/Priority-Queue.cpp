#include <bits/stdc++.h>
using namespace std;

// Priority Queue -> It means we made such a queue whose first element will always be the greatest
int main()
{
    // max heap
    priority_queue<int> p;

    // min heap
    priority_queue<int, vector<int>, greater<int>> q;

    p.push(1);
    p.push(3);
    p.push(2);
    p.push(0);

    cout << "Size -> " << p.size() << endl;

    int m = p.size();
    for (int i = 0; i < m; i++)
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;

    q.push(5);
    q.push(1);
    q.push(0);
    q.push(4);
    q.push(3);

    cout << "Size -> " << q.size() << endl;

    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
    cout << "Empty or not ? : " << q.empty() << endl;
    return 0;
}