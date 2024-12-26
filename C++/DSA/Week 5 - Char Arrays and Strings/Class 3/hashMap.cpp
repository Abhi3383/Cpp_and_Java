#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation of map
    map<int, char> meraMap;
    // insertion
    meraMap[0] = 'a';
    meraMap[1] = 'b';
    meraMap[25] = 'z';

    // access
    cout << "Your ans is: " << meraMap[1] << endl;

    return 0;
}