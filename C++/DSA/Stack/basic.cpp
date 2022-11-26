#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int s[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    ~Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == 99)
        {
            cout << "Stack overflow" << endl;
        }
        top++;
        s[top] = value;
    }
};

int main()
{

    return 0;
}