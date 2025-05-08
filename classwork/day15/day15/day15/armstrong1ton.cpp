#include<iostream>
using namespace std;

bool armstrong(int,int);

int main()

{
	int a;
	int digits = 0;

	cout << "Enter the number";

	cin >> a;

	while (a != 0)
	{
		a = a / 10;
		digits++;

	}

	armstrong(a, digits);
}

bool armstrong(int n, int p)

{
	int sum = 0;
	int r;
	while (n)
	{
		r = n % 10;
		sum = sum + pow(r, p);
		n = n / 10;
	}
	cout << "It is an armstrong number" << endl;

	return 1;
}

int getDigits(int num)

{
	int cDigits = 0;
	while(num)
	{
		cDigits++;
		num /= 10;
	}
	return cDigits;
}

bool checkArmstrong(int num,int p)

{
	double sum = 0;
	int temp = num;

	while(num)
	{
		int r = num % 10;
		sum += pow(r, p);
		num /= 10;
	}
}