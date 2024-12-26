#include<bits/stdc++.h>
using namespace std;

int add(int x, int y);

int main(){
    int a;
	cout << "Enter the value of a " << endl;
	cin >> a;

	int b;
	cout << "Enter the value of b " << endl;
	cin >> b;

	 int sum = add(a, b);

	cout << "Addition result is: " << sum << endl;


}
int add(int x, int y)
{
	int result = x + y;
	return result;
}