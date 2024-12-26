#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n : " ;

    cin >> n;

    vector<int> brr(n, -101);
    cout << "Size of b : " << brr.size() << endl;
    cout << "Capacity of b : " << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    vector<int> crr{10, 20, 30, 50};

    cout << "Printing crr : ";
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    cout << "Vector crr is Empty or not : " << crr.empty() << endl;

    vector<int> drr;
    cout << "Vector drr is empty or not : " << drr.empty() << endl;

    return 0;
}