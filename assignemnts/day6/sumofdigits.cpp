#include<iostream>

using namespace std;


int main()
{
	int n, sum = 0, ans = 0;
	cout << "enter the no: " << endl;
	cin >> n;

	for (int i = 0; i < n; i++) //adding the digits together
	{

		sum = n % 10;
		ans += sum;
		n /= 10;

	}

	cout << ans;

	return 0;
}