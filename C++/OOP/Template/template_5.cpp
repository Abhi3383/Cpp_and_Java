#include <bits/stdc++.h>
using namespace std;

template <typename t1, typename t2, typename t3>

class multi
{
public:
    t1 x;
    t2 y;

    t3 multiplication()
    {
        return (x * y);
    }
};

int main()
{
    multi<int, float, double> m;
    m.x = 5;
    m.y = 6;

    cout << "Mutliplication of numbers is " << m.multiplication();
}