#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, j = 1;
	cout << "Enter the number of times the button is pressed: " << endl;
	cin >> n;
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		j *= 2;
		cout << j << endl;
		sum += j;
	}
	cout << "Sum is: " << sum << endl;
	return 0;
}