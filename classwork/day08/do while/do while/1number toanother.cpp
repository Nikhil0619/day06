#include<iostream>
using namespace std;

int main()

{
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin>> num2;

	for(int i=num1;i<=num2;i++)
	{
		cout << "------------------------" << endl;
		for (int j = 1;j <= 10;j++)
		{
			cout << j << " * " << i << " = " << j*i << endl;

		}
	}
	return 1;
}