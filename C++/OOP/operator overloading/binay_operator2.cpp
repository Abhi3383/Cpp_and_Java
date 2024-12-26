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
    person(const person &p) // copy constructor
                            // using const is preferable in copy constructor for data security
    {
        cout << "copy constructor called" << endl;
        age = p.age;
        rank = p.rank;
    }
    person operator+(person p)
    {
        // person p3 = p1+p2 (assigning p1+p2 -> temp-> person)
        cout << "Operator constructor called" << endl;
        person temp;
        temp.age = age + p.age;
        temp.rank = rank + temp.rank;
        return temp;
    }
};

int main()
{

    person p1(20, 23);   // Parameter constructor
    person p2 = p1;      // copy constructor
    person p3 = p1 + p2; // p1.operator+(p2)
                         // for p3 also default constructor will be called as it will also get memory
    cout << "Prateek age : " << p1.getAge() << " and rank :  " << p1.getRank() << endl;
    cout << "Pankaj age : " << p2.getAge() << " and rank :  " << p2.getRank() << endl;
    cout << "Utkarsh age : " << p3.getAge() << " and rank :  " << p3.getRank() << endl;
    return 0;
}
