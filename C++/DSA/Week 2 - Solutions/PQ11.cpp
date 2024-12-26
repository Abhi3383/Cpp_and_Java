// Display area of circle

#include <bits/stdc++.h>
using namespace std;

float areaOfCircle(float r)
{
    return (float)(3.14 * r * r);
}

int main()
{
    float r;
    cin >> r;
    cout << areaOfCircle(r);
    return 0;
}