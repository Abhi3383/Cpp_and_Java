#include <bits/stdc++.h>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter your Name : ";

    cin >> name;

    cout << "Aapka naam: " << name << " hai "<<endl;
    cout << "############################################" << endl;

    char ch[100];

    ch[0] = 'a';
    ch[1] = 'b';
    cin >> ch[2];

    cout << ch[0] << ch[1] << ch[2] << endl;
    cout << "############################################" << endl;

    char naam[100];

    cin >> naam;

    for (int i = 0; i < strlen(naam); i++)
    {
        cout << "index: " << i << " value: " << naam[i] << endl;
    }

    int value = (int)naam[0]; // ascii value of a character
    cout << "value is : " << value << endl;
}