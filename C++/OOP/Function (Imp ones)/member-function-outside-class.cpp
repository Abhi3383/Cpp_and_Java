#include <bits/stdc++.h>
using namespace std;

class geeks
{
    int a, b;

public:
    void getdata();
    void display();
};

void geeks::getdata()
{
    cout << "\nEnter values of a and b : ";
    cin >> a >> b;
}

void geeks::display()
{
    cout << "a= " << a;
    cout << "\nb= " << b;
}

int main()
{
    geeks g1, g2;
    g1.getdata();
    g1.display();
    g2.getdata();
    g2.display();
    cout << "\nsize of g1= " << sizeof(g1);
    cout << "\nsize of g2= " << sizeof(g2);
    return 0;
}