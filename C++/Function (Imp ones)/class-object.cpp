#include <bits/stdc++.h>
using namespace std;

class geeks
{

public:
    string geekname;
    int id;

    void printname();
    void printid()
    {
        cout << "Geeks id is: " << id;
    }
};

void geeks::printname()
{
    cout << "Geekname is : " << geekname;
}

int main()
{
    geeks g1;
    g1.geekname = "Abhi";
    g1.id = 1;
    g1.printname();
    cout << endl;
    g1.printid();
    return 0;
}