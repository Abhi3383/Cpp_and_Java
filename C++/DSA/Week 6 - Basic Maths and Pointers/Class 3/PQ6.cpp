#include <iostream>
using namespace std;

void solve1(int &num)
{
    num = 50;
}

void solve2(int *val)
{
    *val = *val + 1;
}

void solve3(int *&p)
{
    p = p + 1;
}

int main()
{

    int a = 5;
    solve1(a); 
    cout << a << endl;
    solve2(&a);
    cout << a << endl;

    int b = 12;
    int *q = &b;
    cout << "before " << q << endl;
    solve2(q);
    cout<<*q<<endl; 
    cout << "After " << q << endl;


    int c = 5;
    int *p = &c;

    cout << "before " << p << endl;
    solve3(p);
    cout<<*p<<endl;
    cout << "After " << p << endl;

    return 0;
}