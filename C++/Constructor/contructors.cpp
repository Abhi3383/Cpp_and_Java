#include <bits/stdc++.h>
using namespace std;

class geeks
{
public:
    int id;

    // Default constructor
    geeks()
    {
        cout << "Default constructor called" << endl;
        id = 1;
    }
    geeks(int x)
    {
        cout << "parameterized constructor called" << endl;
        id = x;
    }
};

int main()
{
    // g1 will call default constructor
    geeks g1;
    cout << "Geek id is: " << g1.id << endl;

    // g2 will call parameterized constructor
    geeks g2(21);
    cout << "Geek id is: " << g2.id << endl;
    return 0;
}