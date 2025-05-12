//Write a Program to Calculate the Greatest Common Divisor of Two Numbers

#include<iostream>
using namespace std;

int main()

{
	int a, b, gcd;
	int temp;
	cout << "Enter two numbers";
	cin >> a >> b;

	// Calculate GCD using Euclidean algorithm
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;

	cout << "The GCD is: " << gcd << endl;
	return 0;
}