#include <bits/stdc++.h>
using namespace std;

class geeks
{
    char name[30];
    int price;

public:
    void getdata();
    void display();
};
void geeks::getdata()
{
    cout << "Item name = ";
    cin >> name;
    cout << "Price  = ";
    cin >> price;
}

void geeks::display()
{
    cout << "Name : " << name << "\n";
    cout << "Price : " << price << "\n";
}

const int size = 3;

int main()
{
    int n;
    geeks garr[10];
    cout << "Enter number of objects :\n ";
    for (int i = 0; i < n; i++)
    {
        cout << "Item : " << (i + 1) << "\n";
        garr[i].getdata();
    }
    cout << "\noutput operation";
    for (int i = 0; i < n; i++)
    {
        cout << "Tem details : " << (i + 1) << "\n";
        garr[i].display();
    }

    return 0;
}