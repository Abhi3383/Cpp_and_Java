/*
 * to print a constructor person p3 directly like cout<<p3;
   for such purpose we do stream operator overloading.
 * In cout<<p3;
   we have to 2 objects 1 is of cout of ostream
                        2 is of p3 of person
   so it is a binary operator and now we have to give it 2 operands.
   In obj.operator<<(Person p)
       ^     ^         ^
       |     |         |
       of   class     Private
    ostream
    Since, we cant rewrite the ostream of which we dont have access so in order to access
    Person p privately we create friend function since we cant call operator<< implicitly using obj.operator<<.
    The freind function will be created of person call bcz we want to access it.
    Now since there are 2 objects we have to pass 2 parameters ,i.e, we have to pass cout and p3 as parameters.
 */

#include <bits/stdc++.h>
using namespace std;

class person
{

    int age;
    int rank;

public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    person()
    {
        cout << "Default constructor called" << endl;
    }
    person(int a, int r) // parameterized constructor
    {
        cout << "Parameter constructor called" << endl;
        age = a;
        rank = r;
    }

    friend ostream &operator<<(ostream &os, person p); // if we write friend void operator<<(ostream &os, person p);
                                                       // cout << p3; will return void
                                                       // now if say cout << p3 << p1 it will be interpreted as
                                                       // void (after completion of cout << p3) << p1;
                                                       // it will search for operator<<(void , person)
                                                       // now instead of writing void we write refrence of cout,i.e,
                                                       // refence of ostream that is &ostream
                                                       // so that instead of calling void <<p1;
                                                       // it will again call operator<<(ostream &os, person p);
};

ostream &operator<<(ostream &os, person p)
{
    cout << "Operator called" << endl;
    cout << "Person age : " << p.age << " and rank :  " << p.rank << endl;
    // we can also write
    // os << "Person age : " << p.age << " and rank :  " << p.rank << endl;
}

int main()
{

    person p3(40, 50), p1(70, 43);
    cout << p3 << p1;
    return 0;
}
