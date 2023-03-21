/*
 * int -> Rupee(Pre-defined -> user-defined)=>Type casting overloading
   int -> Dollar(Pre-defined -> user-defined)=>Type casting overloading

 * Rupee -> int(user-defined -> Pre-defined )=>Parameterized constructor
   Dollar -> int(user-defined -> Pre-defined)=>Parameterized constructor

 * rupee = dollar
   Rupee() named overlading wala

   dollar = rupee
   our operator overlading will not work here bcz dollar class was defined afterwards
   so we created Dollar(Parameterized constructor of Rupee) which will convert dollar -> rupee
                 Dollar(Rupee r)

 * The one in left will call the constructor/class fisrst and in right will be call the consttuctor according to it.
   for instance Rupee r;
                Dollar d;
                r=d;
                now of class dollar rupee constructor will be called
 */

#include <iostream>
using namespace std;
class Dollar;
class Rupee
{
    float x;

public:
    int getR()
    {
        return x;
    }

    Rupee()
    {
        cout << "DC Called for Rupee" << endl;
    }

    Rupee(float n)
    {
        cout << "PC called for Rupee" << endl;
        x = n;
    }
    void display()
    {
        cout << "Rupee is " << x << endl;
    }

    operator float()
    {
        cout << "float() called for Rupee" << endl;
        return x;
    }

    operator Dollar();
};
class Dollar
{
    float x;

public:
    Dollar()
    {
        cout << "DC Called for Dollar" << endl;
    }

    Dollar(Rupee r)
    {
        cout << "Dollar(Rupee) for Dollar" << endl;
        x = r.getR() / 100.0;
    }
    Dollar(float n)
    {
        cout << "PC called for Dollar" << endl;
        x = n;
    }
    void display()
    {
        cout << "Dollar is " << x << endl;
    }

    operator float()
    {
        cout << "float() called for Dollar" << endl;
        return x;
    }

    operator Rupee()
    {
        cout << "float() called for Dollar" << endl;
        return x * 100.0;
    }
    int getD()
    {
        return x;
    }
};

int main()
{
    Rupee r1 = 5;
    r1.display();

    cout << endl;

    float x = 20;
    Rupee r2 = x;
    r2.display();

    cout << endl;

    x = r2; // need to do explicit typecasting for this
            // x(int) = r2(Rupee)
            // can also write x=(int)r2;
            // rupee to int
    cout << x << " , " << r2 << endl;

    cout << endl;

    float y = 6;
    Dollar d = y; // dollar to int
                  // dollar PC called
    d.display();
    y = d; // can also write y=(int)d;
           // dollar to int -> typecasting operator called
    cout << y << " , " << d << endl;

    cout << endl;

    Rupee r;
    r = d; // dollar to rupee
           // class dollar will call return into rupee.
    r.display();
    d.display();

    cout << endl;

    d = (Dollar)r; // Dollar constructor called
    d.display();
    return 0;
}