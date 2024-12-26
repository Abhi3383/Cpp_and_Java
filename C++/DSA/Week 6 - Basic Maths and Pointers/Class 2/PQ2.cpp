#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch[10] = "Babbar";
    char *c = ch;

    cout << "ch : " << ch << endl;
    cout << "&ch : " << &ch << endl;
    cout << "&ch[0] : " << &ch[0] << endl;
    cout << "ch[0] : " << ch[0] << endl;

    cout << "&c : " << &c << endl;
    cout << "*c : " << *c << endl; // *(c + 0 )
    cout << "c : " << c << endl;   // important

    char name[9] = "SherBano";
    char *d = &name[0];

    cout << "name : " << name << endl;
    cout << "&name : " << &name << endl;
    cout << "*(name + 3) : " << *(name + 3) << endl;
    cout << "d : " << d << endl; // important
    cout << "&d : " << &d << endl;
    cout << "*(d + 3) : " << *(d + 3) << endl;
    cout << "d + 2 : " << d + 2 << endl; // important
    cout << "*d : " << *d << endl;
    cout << "d + 8 : " << d + 8 << endl;

    char y = 'k';
    char *cptr = &y; // &y will give garbage value
    cout << "cptr : " <<cptr << endl; // k + (garbage value until it founds null character)

    char naam[10] = "babbar";
    cout << "naam : "<< naam << endl;

    char *q = "babbar"; // bad practice
    cout << "q : "<<q << endl;
    return 0;
}