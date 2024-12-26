#include <bits/stdc++.h>
using namespace std;

// type of data stored in minHeap
class info
{
public:
    int value;
    int row;
    int col;

    info(int val, int r, int c)
    {
        value = val;
        row = r;
        col = c;
    }
};

class compare
{
public:
    bool operator()(info *a, info *b)
    {
        return a->value > b->value;
    }
};

vector<int> mergeKSortedArrays(int arr[][4], int k, int n)
{
    priority_queue<info *, vector<info *>, compare> minHeap;

    // hr array ka 1st element insert kro
    for (int i = 0; i < k; i++)
    {
        info *temp = new info(arr[i][0], i, 0);
        minHeap.push(temp);
    }

    vector<int> ans;

    // jab tak minHeap empty nhi hota
    while (!minHeap.empty())
    {
        info *temp = minHeap.top();
        int topEle = temp->value;
        int topRow = temp->row;
        int topCol = temp->col;
        minHeap.pop();
        ans.push_back(topEle);

        // checking if next column exits
        if (topCol + 1 < n)
        {
            info *newInfo = new info(arr[topRow][topCol + 1], topRow, topCol + 1);
            minHeap.push(newInfo);
        }
    }
    return ans;
}

int main()
{
    int arr[][4] = {{2, 4, 6, 8}, {1, 3, 5, 7}, {0, 9, 10, 11}};
    int k = 3;
    int n = 4;

    vector<int> ans = mergeKSortedArrays(arr, k, n);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}