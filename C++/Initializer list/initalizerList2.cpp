// Flow of code
// 1) Initializer list
// 2) Code inside it

#include <bits/stdc++.h>
using namespace std;

class IList
{
    int x, y;

public:
    IList(int p, int q) : x(printf(" 1 \n")), y(printf("2\n"))
    {
        printf(" 3 \n");
    }

    void display()
    {
        // in o/p we can see that x=4 and y=4 its becaise we have given 4 characters inside x and y
        //  x(printf(" 1 \n"))
        //            ^^^ ^
        //            ||| |
        // x = 2 space ,1 1 and 1 \n
        // Similarly in y we have
        //  y(printf("2\n"))
        //            ^ ^
        //            | |
        // y = 1 2 and 1 \n
        cout << "x = " << x << "  , "
             << "y = " << y << endl;
    }
};
int main()
{
    IList l(2, 3);
    l.display();
    return 0;
}