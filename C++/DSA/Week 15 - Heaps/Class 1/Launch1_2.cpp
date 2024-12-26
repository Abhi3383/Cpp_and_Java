// 1 based indexing

#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    int arr[101];
    int size;

    Heap()
    {
        size = 0;
    }

    // insert condition is parent should be greater than its child
    void insert(int value)
    {
        // value insert kro end mai
        size = size + 1;
        int index = size;
        arr[index] = value;

        // place at sahi position
        while (index > 1)
        {
            int parentIdx = index / 2;
            if (arr[index] > arr[parentIdx])
            {
                swap(arr[index], arr[parentIdx]);
                index = parentIdx;
            }
            else
            {
                break; // all others are also sorted move out
            }
        }
    }
};

int main()
{
    Heap h;
    h.arr[0]=0;
    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);

    cout << "Printing the heap:" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    return 0;
}