#include <bits/stdc++.h>
using namespace std;

class geeks
{
public:
    int id;

    // Definition for Destructor
    ~geeks()
    {
        cout << "Destructor called for id: " << id << endl;
    }
};

int main()
{
    geeks g1;
    g1.id = 7;
    int i = 0;
    while (i < 5)
    {
        geeks g2;
        g2.id = i;
        i++;
    } // Scope for obj2 ends here

    return 0;
} // Scope for obj1 ends here