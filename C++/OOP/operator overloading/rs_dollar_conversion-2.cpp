/* Dollar -> float
 float y = d;
   ^       |
   |       |
   |       |
   ---------
 will return float
*/

#include <bits/stdc++.h>
using namespace std;

class Dollar
{
    float d;

public:
    Dollar()
    {
        cout << "DC for dollar" << endl;
    }
    Dollar(float y)
    {
        cout << "PC called for dollar" << endl;
        d = y;
    }

    float getD()
    {
        return d;
    }

    // float -> dollar
    operator float()
    {
        cout << "float() called for dollar" << endl;
        return d;
    }

    // operator Rupee()
    // {
    //     cout << "Rupee() called for dollar" << endl;
    //     return d * 100;
    // }

    void display()
    {
        cout << d << endl;
    }
};

class Rupee
{
    float r;

public:
    Rupee()
    {
        cout << "DC of rupee" << endl;
    }
    Rupee(float x)
    {
        cout << "PC of rupee" << endl;
        r = x;
    }

    operator Dollar()
    {
        cout << "Dollar() called for rupee" << endl;
        return r / 100; // (r/00) -> float
    }

    // Dollar -> Rupee
    Rupee(Dollar d1)
    {
        cout << "Rupee(Dollar) called for Rupee" << endl;
        r = d1.getD() * 100;
    }
    void display()
    {
        cout << "Display of rupee : " << r << endl;
    }
    operator float() // float will be the return type so no need to write before operator
    {
        // since its inside rupee class it will be only be able to access that
        // now since () are empty how will it know if what to be converted in whom
        // as we said since its inside rupee class it will be only be able to acess that so we make it a member function
        cout << "float () of Rupee called" << endl;
        return r;
    }
};

int main()
{
    float x = 10;
    Rupee r1 = x; // float -> rupee
                  // user-defined -> pre-defined => Parameterizec contructor in whihc int x will be passes
                  // will make/create parameterized constructor
                  // have to convert in Rupee so we will call Rupee and make constructor in it

    r1.display();

    cout << endl;

    float y = 10;
    Dollar d1 = y;
    d1.display();

    cout << endl;

    float m = 20;
    Rupee r2 = 50;
    m = r2; // Rupee -> float
            // pre-defined -> user-defined => Typecasting operator overloading
            // inside rupee class operator will be created
            // here it called float type operator called in Rupee
    r2.display();
    cout << m << endl;

    cout << endl;

    float n;
    Dollar d2 = 70;
    n = d2;
    cout << n << endl;

    cout << endl;

    // user-defined <-> user-defined
    //     Rupee    <->    Dollar

    Rupee r3;
    Dollar d3 = 99;
    r3 = d3;
    r3.display();

    cout << endl;

    Rupee r4;
    Dollar d4;
    d4 = r3;
    d4.display();
    return 0;
}