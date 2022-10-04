#include <bits/stdc++.h>
using namespace std;

// we cannot write expression in front of cases like x>5,x+5 though we can write 5>4 or 5+4
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    switch (x)
    {
    case 12 > 9:
        cout << "Atul";
        break;
    case -45:
        cout << "suraj";
        break;
    case 3 + 4:
        printf("Hardik");
    case 20 ... 25:
        cout << "Bikash";
        break;
    default:
        cout << "please enter a valid number ";
        break;
    }
}