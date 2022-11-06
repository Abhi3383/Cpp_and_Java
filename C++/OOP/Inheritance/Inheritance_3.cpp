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
};

class Av2
{
    A a;

private:
    void privateFunctionA()
    {
        cout << "This is private of Av2" << endl;
    }

protected:
    void protectedFunctionA()
    {
        cout << "This is protected of Av2" << endl;
    }

public:
    void publicFunctionA()
    {
        // a.privateFunction();   // error -> cant be acessed, can be accessed in class only
        // a.protectedFunction(); // error -> cant be acessed, can be accessed in class only
        a.publicFunction();
        cout << "This is public of Av2" << endl;
    }
};

class Av3 : public A
{

private:
    void privateFunctionA2()
    {
        cout << "This is private of Av3" << endl;
    }

protected:
    void protectedFunctionA2()
    {
        cout << "This is protected of Av3" << endl;
    }

public:
    void publicFunctionA2()
    {
        // a.privateFunction();   // error -> cant be acessed
        protectedFunction(); // Now with inheritance proctected we can accessed it
        publicFunction();
        cout << "This is public of Av3" << endl;
    }
};

int main()
{
    A a1;
    // a.privateFunction();   // error -> cant be acessed, can be accessed in class only
    // a.protectedFunction(); // error -> cant be acessed, can be accessed in class only
    a1.publicFunction();

    Av2 a;
    a.publicFunctionA();

    Av3 a2;
    a2.publicFunctionA2();

    return 0;
}
