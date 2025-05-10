#include<iostream>
using namespace std;

int main()

{
	int a, b;

	cout << "enter the two numbers";
	cin >> a >> b;

	a= a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "the swapped numbers are" << a<<" "<<b<< endl;

	return 0;
}