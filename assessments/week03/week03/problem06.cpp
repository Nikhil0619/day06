/*You are given an array arr[] of size N containing positive integers. Your task is to reverse every sub-array of size K.

If the number of elements left at the end is less than K, reverse all of them as is.*/

#include <iostream>

using namespace std;


int main()
{
	int n, k;
		
cout << "enter the size of the array";
cin >> n;
	cout << "enter the size of the subarray";
	cin >> k;
	if (n <= 0 || k <= 0)
	{
		cout << "Sorry,size of array and sub array must be positive!" << endl;
		return 0;
	}

	int a[n], b[k];
	
cout << "Enter the elements of the array ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

for (int i = 0; i < n; i =i + k)
	{
		int left = i;
		int right = i + k ;

		while (left < right)
		{
			swap(a[left], a[right]);
			left++;
			right--;
		}
	}

	cout << "Reversed array is";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}