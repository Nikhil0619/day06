//Write a Program to Find the Sum of the First N Natural Numbers

#include<iostream>
using namespace std;

int main()
{
	int a;
	int sum = 0;

	cout << "Enter a number: ";
	cin >> a;

	for (int i = 1;i <= a;i++)
	{
		sum += i;
	}

	cout << "the sum of the first n natural numbers is\n" << sum;

	return 0;
}