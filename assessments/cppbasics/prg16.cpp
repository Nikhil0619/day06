//Write a Program to Check the Prime Number


#include<iostream>
using namespace std;

int main()
{
		int a;
	int count = 0;
	cout << "Enter a number ";
	cin >> a;

	if (a < 2)
	{
		cout << "Not prime";
		return 0;
	}
	// Check if the number is prime

	for (int i = 2; i <= a; i++)
	{
		if (a % i == 0)
		{
			count++;
		}
	}

	if (count == 1)
	{
		cout << "The number is prime";
	}
	else
	{
		cout << "The number is not prime";
	}

	return 0;
}




























































































