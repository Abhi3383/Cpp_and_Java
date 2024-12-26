#include <bits/stdc++.h>
using namespace std;

int main()
{

    // creation
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p1 = make_pair("Scorpio", 9);
    m.insert(p1);

    // another method of creating and inserting
    pair<string, int> p2("alto", 2);
    m.insert(p2);

    // 3rd method is
    m["fortuner"] = 10;

    // access
    cout << m.at("alto") << endl;
    cout << m.at("Scorpio") << endl;

    cout << m.at("fortuner") << endl;
    cout << m["fortuner"] << endl;

    // search
    // 1 if key is present and else 0
    cout << m.count("Scorpio") << endl;
    cout << m.count("scorpio") << endl;

    // find
    if (m.find("fortuner") != m.end())
    {
        cout << "Fortuner found" << endl;
    }
    else
    {
        cout << "Fortuner notfound" << endl;
    }

    // size
    cout << "Size: " << m.size() << endl;

    // now though we havent inserted any pair for key hummer
    // so what it will do is it will create a key and assign the value 0 to it
    cout << m["hummer"] << endl;
    cout << "Size: " << m.size() << endl;

    // printing all the enteries
    for (auto i :m) // i is pair here
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
    

    return 0;
}