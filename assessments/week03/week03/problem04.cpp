/*You are given an array A of N positive or negative integers. Your task is to find the first equilibrium position in the array.

An equilibrium position is an index i such that the sum of elements before index i is equal to the sum of elements after index i.

Return the first equilibrium index (0-based indexing). If no such index exists, return -1.*/

#include <iostream>
using namespace std;

int main()
{
	int a[100], n, i, j, sum1, sum2;
	
	cout << "eter the size of the array ";
	cin >> n;
cout << "Enter the elements of the array";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		sum1 = 0;
		sum2 = 0;
	for (j = 0; j < i; j++)
		{
			sum1 =sum1+ a[j];
		}
	for (j = i + 1; j < n; j++)
		
	{
			sum2 =sum2+ a[j];
		}
	
	if (sum1 == sum2)
		{
			cout << "the first equilibrium index is" << i << endl;
			return 0;
		}
	}
	cout << "no equilibrium index found" << endl;
	return -1;
}