/*
        ----------------------------------------------------------------------------------------------
        |Base class member access specifier  |           Type of Inheritence                          |
        ---------------------------------------------------------------------------------------------
        |                                    | Public          |    Protected      |   Private        |
        ----------------------------------------------------------------------------------------------|
        |Public                              | Public          |    Protected      |   Private        |
        |                                    |                 |                   |                  |
        |Protected                           | Protected       |    Protected      |   Private        |
        |                                    |                 |                   |                  |
        |Private                             | Not accessible  |    Not accessible |   Not accessible |
        |                                    |    (Hidden)     |       (Hidden)    |      (Hidden)    |
        ----------------------------------------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void fun1()
    {
        cout << "fun()1 of A" << endl;
    }

protected:
    void fun2()
    {
        cout << "fun()2 of A" << endl;
    }

private:
    void fun3()
    {
        cout << "fun()3 of A" << endl;
    }
};

class B : public A
{
public:
    void checkProtected()
    {
        // only public and private are accessible in child class
        fun1();
        fun2(); // protected can accessed in B using method
                // fun3(); // private will be unherited but it cant be accessed
    }
};

int main()
{
    A a;
    a.fun1();
    // a.fun2(); protected cant be accessed
    // a.fun3(); private cant be accessed

    B b;
    b.fun1();
    // b.fun2(); was protected in A so will be protected in B also so cant be accessed
    // b.fun3(); was private in A so will be private in B also so cant be accessed
    b.checkProtected(); // protected cant be acessed directly but it can be accessed through B
}