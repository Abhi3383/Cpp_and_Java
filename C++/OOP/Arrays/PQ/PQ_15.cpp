// Given an array of integers 'a', move all the even integers at the
// beginning of the array followed by all the odd integers. The relative
// order of odd or even integers does not matter. Return any array that
// satisfies the condition.

#include <bits/stdc++.h>
using namespace std;

void sortByParity(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 == 1 && v[right_ptr] % 2 == 0)
        { // for odd && for even
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (v[right_ptr] % 2 == 1)
        {
            right_ptr--;
        }
        if (v[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
    }
}

int main()
{
    int n, ele;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    sortByParity(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}