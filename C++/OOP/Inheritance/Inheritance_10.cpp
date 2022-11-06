/* Hybrid inheritance

                       A
                    (Shape)
                       |
    -----------------------------------------
    |                  |                    |

    x                  y                    z
   (Triangle)     (Rectangle)
    |                  |                    |
     ----------------------------------------
                       |
                       B
                    (Object)
*/

#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Rectangle area called" << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout << "Triangle area called" << endl;
    }
};

class Object : public Rectangle, public Triangle
{
public:
    void area()
    {
        Rectangle::area();
        Triangle::area();
    }
};

int main()
{

    Object obj;
    obj.area();
    return 0;
}