#include <bits/stdc++.h>
using namespace std;

int main()
{
    char vowels[5];

    for (char &elements : vowels)
    {
        cin >> elements;
    }

    for (char elements : vowels)
    {
        cout << elements << " ";
    }

    return 0;
}