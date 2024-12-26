#include <bits/stdc++.h>
using namespace std;

class DynamicArray
{
    int *arr;
    int size, capacity;

public:
    DynamicArray()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    ~DynamicArray()
    {
        delete[] arr;
        size = 0;
        capacity = 0;
    }
    void insertByShift(int index, int value)
    {
        if (size == capacity)
        {
            resize();
        }
        if (index >= capacity)
        {
            cout << "Memory not exist" << endl;
        }
        for (int i = size; i >= index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        size++;
    }
    void insert(int index, int value)
    {
        if (size == capacity)
        {
            resize();
        }
        if (index >= capacity)
        {
            cout << "Memory not exist" << endl;
        }
        arr[index] = value;
        size++;
    }
    void resize()
    {
        int *temp = new int[2 * capacity];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity = 2 * capacity;
    }

    int getSize()
    {
        return size;
    }
    int getCapacity()
    {
        return capacity;
    }
    int search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
                return i;
        }
        return -1;
    }
    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Size = " << size << " capacity = " << capacity << endl;
    }

    void del(int index)
    {
        if (index >= size)
        {
            cout << "Index does not exist" << endl;
            return;
        }

        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void shrinktofit()
    {
        int *temp = new int[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity = size;
    }
};

int main()
{
    int n, x, value, index;
    DynamicArray a;
    a.insert(0, 10);
    a.printArray();

    a.insert(1, 20);
    a.printArray();

    a.insert(2, 30);
    a.printArray();

    a.insert(3, 40);
    a.printArray();

    a.insert(4, 50);
    a.printArray();

    a.insertByShift(2, 200);
    a.printArray();

    a.del(5);
    a.printArray();

    a.del(3);
    a.shrinktofit();
    a.printArray();

    int i = a.search(10);
    if (i != -1)
    {
        cout << "Value found\n";
    }
    else
    {
        cout << "Value not found\n";
    }

    return 0;
}