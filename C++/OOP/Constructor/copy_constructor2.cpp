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
    person(int a, int r) // parameterized constructor
    {
        age = a;
        rank = r;
    }
    person(const person &p) // copy constructor
                            // using const is preferable in copy constructor for data security
    {
        age = p.age;
        rank = p.rank;
    }
};

int main()
{

    person p1(20, 23);
    person p2 = p1;

    cout << "First : " << p1.getAge() << endl;
    cout << "First : " << p1.getRank() << endl;

    cout << "Second : " << p2.getAge() << endl;
    cout << "Second : " << p2.getRank() << endl;

    return 0;
}
