// Find key using recursion

#include <bits/stdc++.h>
using namespace std;

bool checkKey(string str, int n, int i, char key)
{
    if (i >= n)
        return false;

    if (str[i] == key)
    {
        cout << "Found as index:" << i << endl;
    }

    return checkKey(str, n, i + 1, key);
}

int main()
{
    string str = "lovababbar";
    int n = str.length();
    int i = 0;

    char key = 'b';
    bool ans = checkKey(str, n, i, key);

    return 0;
}
