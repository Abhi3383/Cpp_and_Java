#include <bits/stdc++.h>
using namespace std;

class IList
{
    int x;
    const int y; // const int y = 5; -> initialization

public:
    // IList(int a, int b)
    //  {
    //      x = a;
    //      y = b;
    //  }
    // if we write something like this it will throw an error bcz y is const data member
    // but with Initializer list it wont throw this error so with modifiable const variable we should use Initializer list
    IList(int a, int b) : x(a), y(b)
    {
    }
    void display()
    {
        cout << "x = " << x << " , "
             << "y = " << y << endl;
    }
};

int main()
{
    IList i(7, 8);
    i.display();

    return 0;
}