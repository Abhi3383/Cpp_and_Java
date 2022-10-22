/*
👉Callbyobject
->ReturnType FunctionName(className object) ;
-> Example: Complex add(Complex c)

👉Returning Object
->Class Name FunctionName ¢ ) i
*/
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
    // name of members are a,b,set,showData,add.
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "\nreal = " << a << "\nimg  = " << b;
    }
    Complex add(Complex c) // Complex is a data type by definition of class
    // since c2 is getting passed as argument for that purpose we have to pass parameters also
    // data of c2 will be copied in c
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.set(4, 3);
    c2.set(5, 6);
    c3 = c1.add(c2); // c3 = c1+c2
    // c1 is caller object
    // which is calling add function
    // and c2 is getting passed as an argument
    c3.showData();
    return 0;
}