# include<iostream>
using namespace std;

int main()

{
	int n;
	int r;
	int count = 0;

	cout << "enter a number" << endl;
	cin >> n;
	r = n;

	do
	{
		count++;

		cout << count << endl;
		n = n / 10;

	} while (n || n % 10 == r);


	cout << "same Digit frequencies is " << count;
	return 0;
}