/*
 () -> Function call operator
*/

#include <bits/stdc++.h>
using namespace std;

class Distance
{
    int feet;
    int inch;

public:
    Distance()
    {
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    Distance operator()(int a, int b, int c)
    {
        Distance d;
        d.feet = a + c + 5;
        d.inch = a + b + 15;
        return d;
    }
    void display()
    {
        cout << "Feet = " << feet << " , "
             << "Inch = " << inch << endl;
    }
};

int main()
{
    Distance d1(5, 10);
    Distance d2;
    d1.display();
    d2 = d1(10, 27, 39);
    d1.display();
    d2.display();
    return 0;
}