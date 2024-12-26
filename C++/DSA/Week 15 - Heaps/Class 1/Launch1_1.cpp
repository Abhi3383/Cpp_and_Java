// 1 based indexing insertion and deletion

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

    void deletion()
    {
        // replace root node with last node
        arr[1] = arr[size];
        size--; // last element removed

        // place root node ka data on its correctp position
        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;

            int largest = index;
            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }
            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }
            if (largest == index)
            {
                // value is at correct position
                return;
            }
            else
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
    }
};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;

    cout << "Printing the heap:" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    h.insert(110);
    cout << "\nPrinting the heap:" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    h.deletion();
    cout << "\nPrinting the heap after deleting:" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    return 0;
}