#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout << "Top element -> " << s.top() << endl;
    s.pop();
    cout << "After popping Top element -> " << s.top() << endl;
    cout << "Size of Stack -> " << s.size() << endl;
    cout << "Empty or not -> " << s.empty() << endl;
    return 0;
}