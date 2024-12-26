#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{3, 1, -4, 1, 5, 9};

    vector<int>::iterator result = min_element(v.begin(), v.end());
    cout << "min element has value " << *result << " and index ["
         << std::distance(v.begin(), result) << "]\n";
}