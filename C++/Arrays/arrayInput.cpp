#include <bits/stdc++.h>
using namespace std;

int main()
{
    char vowels[5];

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Enter vowel number " << i + 1 << " : ";
        cin >> vowels[i];
    }

    for (size_t i = 0; i < 5; i++)
    {
        cout << "Entered vowel number at " << i + 1 << " is : ";
        cout << vowels[i] << " " << endl;
    }

    return 0;
}