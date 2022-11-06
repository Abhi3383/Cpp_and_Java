#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    void privateFunction()
    {
        cout << "This is private of A" << endl;
    }

protected:
    void protectedFunction()
    {
        cout << "This is protected of A" << endl;
    }

public:
    void publicFunction()
    {
        cout << "This is public of A" << endl;
    }

    A(int a)
    {
        cout << "Parent constructor called" << endl;
    }
    ~A()
    {
        cout << "Destructor of A called" << endl;
    }
};

class Av2 : public A
{

private:
    void privateFunctionA2()
    {
        cout << "This is private of Av2" << endl;
    }

protected:
    void protectedFunctionA2()
    {
        cout << "This is protected of Av2" << endl;
    }

public:
    void publicFunctionA2()
    {
        protectedFunction();
        publicFunction();
        cout << "This is public of Av2" << endl;
    }

    // defalt constructor of Av2 which was created at the time of object creation calls the parent class parameterized constructor
    Av2() : A(2)
    {
        cout << "Child constructor called" << endl;
    }
    ~Av2()
    {
        cout << "Destructor of Av2 called" << endl;
    }
};

int main()
{
    Av2 a2;
    a2.publicFunctionA2();

    return 0;
}
