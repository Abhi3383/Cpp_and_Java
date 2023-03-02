/*
Complex c2= c1; -> initialization
->here complex have return type
Complex(here we have to pass paramter){}
->now here c1 of complex type is getting assigned to c2
so c1 will be passed as an argument of type constructor

Complex(Complex c){

}
->c2 will be going expicitly and c1 will be going implicitly

Complex(Complex &c) //we know that it is a copy constructor by & while passing parameter.
{
 age(implicityly called by c2 (directly called)) = c.age(explicitly called by c1);
}
if we would have writte Complex c2;
                        c2 = c1; -> assignment function operator will be called which is overloaded
                                 -> here we have to create overloaded
whenever we write complex c3=c2+c1; or complex c3=c2++; in these cases copy constructor will be called
as after performing funtion like after performing c1+c2 it will become temporary
then it will act like complex c3 = temp which will again work as copy constructor

*/

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // in copy constructor parameters are passed as refrence.
    Complex(Complex &c)
    {
        a = c.a; // a is from c4 and c.a is from c1
        b = c.b; // b is from c4 and c.b is from c1
    }

    void showData()
    {
        cout << "\nreal = " << a << " , "
             << "img  = " << b;
    }
};

int main()
{
    Complex c1(3, 4), c3;
    Complex c4 = c1; // this line is copy constructor
    // c1's refrence is getting passed and it is going to c
    // c is going to represent c1 but c is not a object
    // rather c is just like another name of c1
    c1.showData();
    c3.showData();
    c4.showData();
    return 0;
}