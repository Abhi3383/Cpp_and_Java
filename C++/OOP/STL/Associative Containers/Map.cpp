// MAP is data structure in which our data is stored in the form key value,
// which means that our key,suppose,is LOVE and the value is SCORPIO
// so LOVE is pointing towards SCORPIO remember one thing that all your keys are unique
// and one key will point to only one value, which means That this love will only points towards the SCORPIO,
// it cannot point any other car.
// MAP prints in sorted nature
// Complexity O(logn)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";

    m.insert({6, "chota"});
    m.insert({5, "bheem"});
    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " ";
        // to print values also
        cout << i.second << endl;
    }
    cout << endl;
    cout << "finding 13 ->" << m.count(13) << endl;
    cout << "finding -13 ->" << m.count(-13) << endl;

    m.erase(6);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " ";
        // to print values also
        cout << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " ";
    }
    cout << endl
         << endl;

    map<int, int> ms;
    ms.insert(pair<int, int>(1, 10));
    ms.insert(pair<int, int>(2, 20));
    ms.insert(pair<int, int>(3, 30));
    ms.insert(pair<int, int>(7, 70));
    ms.insert(pair<int, int>(5, 50));

    ms[9] = 90;
    ms[10] = 100;

    ms.erase(5);

    ms.insert(pair<int, int>(5, 500));
    map<int, int>::iterator its;
    for (its = ms.begin(); its != ms.end(); its++)
    {
        cout << "First/Key : " << its->first << " , Second/Value : " << its->second << endl;
    }
    return 0;
}