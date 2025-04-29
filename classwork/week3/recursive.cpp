#include<iostream>
using namespace std;

int main()

{
	number(n);
}

int number(int n)
{
	cout<< "Enter a number: ";
	cin>> n;
	if (n <= 1)
		return n;
	n--;
	number(n);
}