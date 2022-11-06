#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout << "Size before pop -> " << q.size() << endl;
    cout << "First element -> " << q.front() << endl;
    q.pop();
    cout << "After popping First element -> " << q.front() << endl;
    cout << "Size after pop -> " << q.size() << endl;
    return 0;
}