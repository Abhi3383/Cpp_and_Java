#include <bits/stdc++.h>
using namespace std;

class IList
{
    int x;
    const int y;
    int &z; // whenever you are making refrence variable it is mandatory to tell whom it is pointing at
            // if we write just int &z; it will throw an error

public:
    // IList(int a, int b) : y(b)
    // {
    //     x = a;
    //     z = x;
    // }
    // it will throw an error if we write
    //  int &z=x;
    // whenever you are making refrence variable it is mandatory to tell whom it is pointing at
    // if we write just int &z; it will throw an error

    // now with the help of initializer list we dont have to do it
    // we can simply write int &z;
    IList(int a, int b) : y(b), z(x)
    {
        x = a;
    }

    void display()
    {
        cout << "x = " << x << " , "
             << "y = " << y << " , "
             << "z = " << z << endl;
    }
};
int main()
{
    IList l1(3, 4);
    l1.display();
    return 0;
}