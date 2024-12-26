#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello, World!";
    size_t found = str.find("World");
    
    if (found != string::npos)
        cout << "'World' found at: " << found << '\n';
    else
        cout << "'World' not found\n";

    found = str.find("Earth");

    if (found != string::npos)
        cout << "'Earth' found at: " << found << '\n';
    else
        cout << "'Earth' not found\n";

    return 0;
}