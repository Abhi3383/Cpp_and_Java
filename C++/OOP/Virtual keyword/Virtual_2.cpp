#include <bits/stdc++.h>
using namespace std;

class Flight
{
public:
    void search()
    {
        cout << "Search flight" << endl;
    }
    virtual void book()
    {
        cout << "Book flight" << endl;
    }
};

class AirIndia : public Flight
{
public:
    void book()
    {
        cout << "AirIndia flight Booked" << endl;
    }
};

class SpiceJet : public Flight
{
public:
    void book()
    {
        cout << "SpiceJet flight Booked" << endl;
    }
};

int main()
{
    Flight *flight1;
    Flight *flight2;

    AirIndia ai;
    SpiceJet sj;

    flight1 = &ai;
    flight1->book();
    flight1->search();

    flight2 = &sj;
    flight2->book();
    flight2->search();
    return 0;
}