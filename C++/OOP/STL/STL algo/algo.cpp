#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "finding 10 -> " << binary_search(v.begin(), v.end(), 10) << endl;

    cout << "lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    // lower_bound(v.begin(), v.end(),) this return iterator
    cout << "upper bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    // Max , Min and Swap
    int a = 3, b = 5;
    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;
    swap(a, b);
    cout << "swap -> "
         << "a=" << a << ","
         << "b=" << b << endl;

    // String reverse
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "string -> " << s << endl;

    // Rotate

    // you have to tell in it from where you want to start.
    // Where your middle is means how much element you want to rotate , I only want to rotate one, so  v.begin +1.
    // You have to tell where your end is.

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Sorting -> sort is based on introsort and what is introsort, it is the combination of three algorithms.
    // Quick sort, Heap sort and insertion sort, with the help of these three aigorithms -> Introsort is made And that is working behind the scene of this sort function. |

    sort(v.begin(), v.end());
    cout << "after sorting : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}