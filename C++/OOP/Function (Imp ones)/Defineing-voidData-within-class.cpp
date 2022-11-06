#include <bits/stdc++.h>
using namespace std;

class geeks
{

public:
    int a, b;

    void getdata()
    {
        cout << "Enter values of a and b : " << endl;
        cout << a << endl;
        cout << b;
    }
    void display()
    {
        cout << "\nvalue at a = " << a;
        cout << "\nvalue at b = " << b << endl;
    }
};

int main()
{
    geeks s1;
    // Since, int a,b are private it is will generate an error
    // if we write private: int a,b; in class
    s1.a = 10;
    s1.b = 20;
    s1.getdata();
    s1.display();

    return 0;
}