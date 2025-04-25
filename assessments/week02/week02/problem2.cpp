# include<iostream>
using namespace std;

int main()

{
	int n;
	int r;
	int count = 0;

	cout << "enter a number" << endl;
	cin >> n;

	if (n || n % 10 == r)
	{
		cout << r;
		count++;
		n = n / 10;

	}
	cout << "same Digit frequencies is " << count;
	return 0;
}