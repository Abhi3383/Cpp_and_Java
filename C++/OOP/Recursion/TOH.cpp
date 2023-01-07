#include <bits/stdc++.h>
using namespace std;

/*
-> S-> H small pyramid(n-1) disks //call
-> S-> D largest Disk(we have printed message for it)
-> H-> D small pyramid //call

*/

void tower(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    tower(n - 1, s, d, h);
    cout << s << " to " << d << endl;
    tower(n - 1, h, s, d);
    return;
}

int main()
{
    int n;
    cout << "Enter number of disks : ";
    cin >> n;
    tower(n, 'A', 'B', 'C');

    return 0;
}