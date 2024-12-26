#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> timePoints{"23:59", "01:20"};

    string curr1 = timePoints[0];
    // substring method to find/fetch particular length of string
    // substr(startingIndex, length);
    string str1 = curr1.substr(0, 2);
    cout << "In string : " << str1 << endl;
    // stoi method to convert string of some length/particular length into integer
    int hrs1 = stoi(curr1.substr(0, 2));
    cout << "hours : " << hrs1 << endl;
    int min1 = stoi(curr1.substr(3, 2));
    cout << "minutes : " << min1 << endl;
    cout << "Total : " << hrs1 << ":" << min1 << endl;
    cout << "Total minutes : " << hrs1 * 60 + min1 << endl;

    string curr2 = timePoints[1];
    // substring method to find/fetch particular length of string
    string str2 = curr2.substr(0, 2);
    cout << "In string : " << str2 << endl;
    // stoi method to convert string of some length/particular length into integer
    int hrs2 = stoi(curr2.substr(0, 2));
    cout << "hours : " << hrs2 << endl;
    int min2 = stoi(curr2.substr(3, 2));
    cout << "minutes : " << min2 << endl;
     cout << "Total : " << hrs2 << ":" << min2 << endl;
    cout << "Total minutes : " << hrs2 * 60 + min2 << endl;

    return 0;
}