#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    cout << "Multiplication : " << (++a) * (++a) << endl;

    int x = x;
    cout << "x : " << x << endl;
    int c = x++ + 1;
    cout << "c : " << c << endl;

    int z = 11;
    cout << "z : " << z++ << endl;
    cout << "z : " << z << endl;

    int y = -27;
    y = y >> 1;
    cout << "y : " << y << endl;

    int p = 12;
    p = p << 3;
    cout << "p : " << p << endl;

    bool d = false;
    bool b = true;

    cout << "(~b) :" << (~b) << endl;
    cout << "~(b) :" << ~(b) << endl;
    cout << "(~d) : " << (~d) << endl;
    cout << "~(d) : " << ~(d) << endl;
    cout << "(d or b) : " << (d or b) << endl;
    cout << "(d and b) : " << (d & b) << endl;
    cout << "(d | b) : " << (d | b) << endl;
    cout << "(d ^ b)(XOR) : " << (d ^ b) << endl;
    cout << "(d & b) : " << (d & b) << endl;

    bool r = false;
    cout << "(~r) : "<< (~r) << endl;
    cout << "~(r) : "<< ~(r) << endl;
    cout << (5 & 10) << endl;
}