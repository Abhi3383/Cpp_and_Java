#include <iostream>
#include <vector>

using namespace std;

int count_triplets(vector<int> nums, int x)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (i != j && i != k && j != k && nums[i] + nums[j] + nums[k] == x)
                {
                    cout << nums[i] << " " << nums[j] << " " << nums[k] << " " << endl;
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int x = 0;
    cout << "Count of triplets: " << count_triplets(nums, x) << endl;
    return 0;
}
