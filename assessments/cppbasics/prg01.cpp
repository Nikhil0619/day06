			//Write a C++ Program to Check Whether a Number is a Positive or Negative Number

#include<iostream>

using namespace std;

int main()
{
	int a;

	cout << "Enter a number: ";
	cin >> a;

	if (a < 0)
	{
		cout << "The number is negative";

	}
	if (a > 0)
	{
		cout << "the number is positive;";
	}

	return 0;
}