// GFG -> Factorial of a large number

#include <bits/stdc++.h>
using namespace std;

vector<int> factorial(int n)
{
    // code here
    vector<int> ans;
    ans.push_back(1);
    int car = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + car;
            ans[j] = x % 10;
            car = x / 10;
        }
        while (car)
        {
            ans.push_back(car % 10);
            car /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int N;
    cin >> N;
    vector<int> result = factorial(N);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i];
    }
    cout << endl;

    return 0;
}