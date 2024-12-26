// Leetcode -> Sort Colors - Sort an array of 0,1,2

#include <bits/stdc++.h>
using namespace std;

// Override method
void sortColors1(vector<int> &nums)
{
    int zeroes, ones, twos;
    zeroes = ones = twos = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            zeroes++;
        else if (nums[i] == 1)
            ones++;
        else
            twos++;
    }
    int i = 0;
    while (zeroes--)
    {
        nums[i] = 0;
        i++;
    }
    while (ones--)
    {
        nums[i] = 1;
        i++;
    }
    while (twos--)
    {
        nums[i] = 2;
        i++;
    }
}

// Using STL function
void sortColors2(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}

// Using in place shuffling
// Implementing using 3 pointer approach
void sortColors3(vector<int> &nums)
{
    int l, m, h = nums.size() - 1;
    l = m = 0;

    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[l], nums[m]);
            l++, m++;
        }
        else if (nums[m] == 1)
            m++;
        else
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
}

int main() {}