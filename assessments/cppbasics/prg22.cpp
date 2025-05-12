//Write a Program to Find the Smallest and Largest Element in an Array

#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int n;
	int largest, smallest;

	cout << "Enter the number of elements in the array ";
	cin >> n;

	cout << "Enter the elements of the array\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	largest = a[0];
	smallest = a[0];

	for (int i = 1; i < n; i++)
	{
		if (a[i] > largest)
			largest = a[i];
		if (a[i] < smallest)
			smallest = a[i];
	}

	cout << "The largest element in the array is: " << largest << endl;
	cout << "The smallest element in the array is: " << smallest << endl;

	return 0;
}