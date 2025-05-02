/*You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.
*/

#include<iostream>

using namespace std;

int main()

{
	int a[] = { 1,1,2,2,3,3,4,5,5 };

	int n = sizeof(a) / sizeof(a[0]);

	int i = 0;
	int j = 1;
	int unique;
	for (i = 0;i < n;i++)
	{
		if (a[i] != a[j])
		{
			unique = a[i];

			cout << "the unique element is" << unique << endl;
			j++;
			break;
		}
		else
		{
			cout << "no unique element present";
		}

		return 0;

	}
}
