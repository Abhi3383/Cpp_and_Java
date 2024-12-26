#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<vector<int>> nums{{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
	for (auto i : nums)
	{
		int x = i[0], y = i[1];
		cout << x << " " << y << endl;
	}

	return 0;
}