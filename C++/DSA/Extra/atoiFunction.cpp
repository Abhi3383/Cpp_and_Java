// atoi function is used to convert
// string of integer to integer
// means "42"(String) -> 42(integer)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "42";
    int integer = atoi(s.c_str());
    cout << integer;

    return 0;
}