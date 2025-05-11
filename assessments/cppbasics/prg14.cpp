//Write a Program to Find the Factorial of a Number Using Loops

#include<iostream>
using namespace std;

int main()
{
	int a;
	int factorial = 1;

	cout << "Enter a number ";
	cin >> a;

	for (int i = 1;i <= a;i++)
	{
		factorial=i* factorial;
	}

	cout << "the factorial of the number is\n" << factorial;

	return 0;
}