#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, int> ms;
    ms.insert(pair<int, int>(1, 10));
    ms.insert(pair<int, int>(2, 20));
    ms.insert(pair<int, int>(3, 30));
    ms.insert(pair<int, int>(7, 70));
    ms.insert(pair<int, int>(5, 50));
    ms.insert(pair<int, int>(5, 500));
    multimap<int, int>::iterator its;
    for (its = ms.begin(); its != ms.end(); its++)
    {
        cout << "First/Key : " << its->first << " , Second/Value : " << its->second << endl;
    }
    return 0;
}