#include <bits/stdc++.h>
using namespace std;

int main()
{
    // another way to write cout operation
    std::cout << "Hello world" << endl;

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
        cout << i << endl;
    }
    cout << endl;
    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    //".clear()" it is used to clear the vector
    cout << "before clear -> " << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "before clear size -> " << v.size() << endl;

    v.clear();

    cout << "After clear -> " << endl;
    for (int i : v)
    {
        cout << i << endl;
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
        cout << i << endl;
    }
    cout << endl;

    // to copy all the elements of a in v
    vector<int> last(a);
    cout << "Copying all the elements of VECTOR v in a->" << endl;
    for (int i : a)
    {
        cout << i << endl;
    }
    cout << endl;
    return 0;
}