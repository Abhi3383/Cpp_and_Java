#include <bits/stdc++.h>
using namespace std;

int findMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

// n is a parameter
void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int a, b, c;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "Enter the value of c : ";
    cin >> c;

    int maximumNumber = findMax(a, b, c);
    cout << "Maximum Number is :" <<maximumNumber << endl;

    cout << "############################################################" << endl;

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // n is argument
    printCounting(n);

    int ans = getSum(n);

    cout << "Sum upto " << n << " is  " << ans << endl;

    return 0;
}