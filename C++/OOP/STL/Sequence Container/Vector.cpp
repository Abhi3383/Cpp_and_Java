#include <bits/stdc++.h>
using namespace std;
/*

Vectors -> dynamic arrays
        -> resize when insert/delete elements
        -> contiguous memory allocation(stored in cosecutive or sequential way)
        -> vector<data_type> vector_name; (vector variable)
        -> vector<data_type> vector_name(size); (vector array)

# capacity >= size
_______
|  |  |    size=2, capacity=2
|__|__|
  0  1
_________
|  |  |  |  size=3, capacity=4
|__|__|__|
  0  1  2
________________
|  |  |  |  |  |  size=5, capacity=8
|__|__|__|__|__|
 0  1  2   3  4

->Capacity increases in terms of 2 raised to the power.

1) v.reize(size);
2) v.push_back(element);
3) v.insert(position,element);
4) v.begin(); <- first element
5) v.end(); <- end element
6) v.pop_back(position);
7) v.erase(position,element);

*/
int main()
{
    // another way to write cout operation
    cout << "Hello world" << endl;

    // Vector is a dynamic array
    vector<int> v;

    // ".capacity()" is used to find out the size of an array
    cout << "Capacity -> " << v.capacity() << endl;

    // Now to insert an element in an array we use ".push_back()" function
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;

    // Now here what happened is since the vector we created has the initial size 4
    // Now if it didnt have the size it will create the another vector and store the previous values in it
    cout << "Size -> " << v.size() << endl;

    // Size tells us that how many elements are here and'
    // Capacity tells for how many elements the size has been assigned
    cout << "Elements at 2nd index -> " << v.at(2) << endl;

    cout << "front -> " << v.front() << endl;

    cout << "back -> " << v.back() << endl;

    // in push_back() we added 3 at end and in pop_back() it will remove 3 from end
    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // resize

    cout << "Size before = " << v.size() << endl;
    cout << "Capacity before = " << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    v.resize(4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout << "Size after = " << v.size() << endl;
    cout << "Capacity after = " << v.capacity() << endl
         << endl;

    // shrink_to_fit - size = capacity

    cout << "Shrink to fit" << endl;
    cout << "Size before = " << v.size() << endl;
    cout << "Capacity before = " << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    v.resize(9);
    v.shrink_to_fit();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout << "Size after = " << v.size() << endl;
    cout << "Capacity after = " << v.capacity() << endl
         << endl;

    // .empty() -> to check whether its empty or not
    if (v.empty() == true)
        cout << "Vector is empty" << endl;
    cout << "Vector is Not empty" << endl
         << endl;

    // iterator
    vector<int>::iterator it;
    cout << "Using iterator" << endl;
    // it = v.begin() -> iterator it is pointing to vector v
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Another way of doing it is
    cout << "Printing using Approach 2" << endl;
    it = v.begin();
    for (int i = 0; i < v.size(); i++)
    {
        cout << *(it + i) << " ";
        // can also write -> cout << it[i] << " ";
    }

    cout << "\n\n";
    cout << "Printing using rbegin and rend" << endl;
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl
         << endl;

    //".clear()" it is used to clear the vector
    cout
        << "before clear -> " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "before clear size -> " << v.size() << endl;

    v.clear();

    cout << "After clear -> " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "after clear size -> " << v.size() << endl;

    // To create a vector of specific size
    vector<int> a(5, 1);
    // 5 means SIZE of ELEMENT and 1 means initialize all elements with 1
    // else if you want initialize it will the value to 0 (default case),
    cout << "Printing all the elements of VECTOR a -> " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // to copy all the elements of a in v
    vector<int> last(a);
    cout << "Copying all the elements of VECTOR v in a->" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    // .swap()

    vector<int> v3 = {4, 3, 54, 64, 32, 2, 8};
    vector<int> v4 = {532, 234, 32, 432, 4324, 324, 324, 324};
    cout << "Before swapping" << endl;
    cout << "Value of v3 \n";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << "\nValue of v4 \n";
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    v3.swap(v4);
    cout << "\n\nAfter swapping" << endl;
    cout << "Value of v3 \n";
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << "\nValue of v4 \n";
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl
         << endl;

    vector<int> v5;
    v5.assign(5, 10); // it will assign 10, 5 times
    cout << "Assign -> assigning 10, 5 times : " << endl;
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }

    return 0;
}