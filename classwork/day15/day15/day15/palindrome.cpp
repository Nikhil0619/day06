#include<iostream>

using namespace std;

int main()

{
	int n;
	int newn = 0;
	int rem;

	cout << " Enter a number";
	cin >> n;
	
	int p = n;

	while (n != 0)
	{
		rem = n % 10;
		newn = newn * 10 + rem;
		n = n / 10;
	}

	cout << n << endl<<newn <<endl<< p << endl;

	if (newn == p)
	{
		cout << "it is a palindrome";
	}
	else
	{
		cout << "it is not a palindrome";
	}

	return 0;
}