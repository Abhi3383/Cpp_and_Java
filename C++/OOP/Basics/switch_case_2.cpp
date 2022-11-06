#include <bits/stdc++.h>
using namespace std;

int main()
{
    int z, x, y;

    while (1)
    {
        cout << "\n1.Addition";
        cout << "\n2.Subtraction";
        cout << "\n3.Multiplication";
        cout << "\n4.Divison";
        cout << "\n5.Exit";
        cout << "\nEnter a number : ";
        cin >> z;
        switch (z)
        {
        case 1:
            cout << "\nEnter 2 number to add : ";
            cin >> x >> y;
            cout << "Added number is : " << x + y;
            break;
        case 2:
            cout << "\nEnter 2 number to subtract : ";
            cin >> x >> y;
            cout << "Subtracted number is : " << x - y;
            break;
        case 3:
            cout << "\nEnter 2 number to multiply : ";
            cin >> x >> y;
            cout << "Multiply number is : " << x * y;
            break;
        case 4:
            cout << "\nEnter 2 number to divide : ";
            cin >> x >> y;
            cout << "Divide number is : " << x / y;
            break;
        case 5:
            exit(0);
        default:
            cout << "\nEnter a valid number";
            break;
        }
    }
}