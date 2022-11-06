// Pure virtual function - it is used to create an abstract class
// cannot create an object of abstract class bcz the class conatins pure virtual function. It is an incomplete function.

#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual void area() = 0; // Pure virtual function
};

class Rectangle : public Shape // it will also be an abstract class since it inherited the virtual function of shape
{
public:
    void area()
    {
        cout << "Rectangle area called" << endl;
    }
};

class Triangle : public Shape // if we dont define the inherited pure virtual function in sub class it will generate an error
{
public:
    void area()
    {
        cout << "Triangle area called" << endl;
    }
};

int main()
{
    // Shape s; error -> You cannot create an object of Abstract class
    Rectangle r;
    r.area();

    Triangle t;
    t.area();
    return 0;
}