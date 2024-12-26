// Printing number

#include <bits/stdc++.h>
using namespace std;

int printNoDesc(int n)
{
    if (n == 0)
    {
        return 0;
    }

    cout << n << " ";
    return printNoDesc(n - 1);

}
int printNoAsc(int n)
{
    if (n == 0)
    {
        return 0;
    }

    printNoAsc(n - 1);
    cout << n << " ";

}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    printNoDesc(n);
    cout<<endl;
    printNoAsc(n);
}
