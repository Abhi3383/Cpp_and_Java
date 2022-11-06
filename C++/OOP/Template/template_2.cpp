#include <iostream>
using namespace std;

// defining template
template <typename T, typename F, typename P>

// If we want to diffrenet data types to be changed at compile time then
P add(T x, F y)
{
    return (x + y);
}
int main()
{
    float sum1 = add<float, int, float>(2.5, 3);
    float sum2 = add<int, int, int>(2.5, 3);

    cout << "Addition of number is " << sum1 << endl;
    cout << "Addition of number is " << sum2 << endl;
    return 0;
}