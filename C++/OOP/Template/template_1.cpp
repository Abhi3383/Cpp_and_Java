#include <iostream>
using namespace std;

// Template makes changes at compile time

// float add(float x, float y)
// {
//     return (x + y);
// }

// converting above code into Template

// defining template
template <typename T> // or <class T>

// At compile time T will be replace with data type
T add(T x, T y)
{
    return (x + y);
}
int main()
{
    // now by writng <float> we are telling compiler replace the T with float data type
    // so at compile time the places at where it has wriiten T it will write float
    float sum1 = add<float>(2.5, 3);
    float sum2 = add<int>(2.5, 3);
    cout << "Addition of number is " << sum1 << endl;
    cout << "Addition of number is " << sum2 << endl;
    return 0;
}