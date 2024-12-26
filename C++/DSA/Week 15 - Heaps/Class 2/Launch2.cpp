// Min Heap using priority_queue STl

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout << "Size:" << pq.size() << endl;

    cout << "Top element:" << pq.top() << endl;
    pq.pop();
    cout << "Size:" << pq.size() << endl;
    cout << "Top element:" << pq.top() << endl;
    pq.pop();
    cout << "Top element:" << pq.top() << endl;
    pq.pop();
    cout << "Top element:" << pq.top() << endl;
    pq.pop();
    cout << "Top element:" << pq.top() << endl;
    pq.pop();
    cout << "Size:" << pq.size() << endl;
    if (pq.empty())
    {
        cout << "Max heap is empty" << endl;
    }
    else
    {
        cout << "Max heap is not empty" << endl;
    }
}