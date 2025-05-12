//Write a Program to Calculate the Sum of Elements in an Array

#include<iostream>
using namespace std;

int main()

{
	int a[1000];
	int n;
	int sum = 0;

	cout << "Enter the size of the array\n";
	cin >> n;

	cout << "Enter the elements of the array\n";

	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}

	cout << "The sum of the eleemnts in the array is =  " << sum << endl;

	return 0;
}