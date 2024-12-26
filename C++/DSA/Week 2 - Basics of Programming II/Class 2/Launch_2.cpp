#include <iostream>
using namespace std;

int raja = 420;

int main()
{
    // vairable scoping

    // decalaration
    int a;
    // initialisation
    int b = 5;
    // updation
    b = 10;
    cout << "raja : " << raja << endl;

    if (true)
    {
        int b = 15;
        int raja = 421;

        cout << "b : " << b << endl;
        cout << "raja : " << raja << endl;
    }

    cout << "b : " << b << endl;
    cout << "raja : " << raja << endl;
    return 0;
}