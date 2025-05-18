//reverse an array using pointers.

#include<iostream>

using namespace std;

void reverseArray(int* , int );


void reverseArray(int* arr, int size)
{
	int temp;
	int i;
	for ( i = 0;i < size/2;i++)
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
	cout << "the reversed array is\n";

	for (i = 0;i < size;i++)
		cout << arr[i]<<" ";
}

	int main()

	{
		int arr[] = { 1,2,3,4,5,6 };
		int cap = sizeof(arr) / sizeof(arr[0]);

		cout << "the reverse of the array is";

		reverseArray(arr, cap);//arr is by default address arr[0]

		return 0; }