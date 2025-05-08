#include<iostream>

#define MAX 1000
using namespace std;

int main()

{
	int a[MAX];

	int n = sizeof (a) / sizeof (a[0]);

	cout << "Enter the size of the array\n";
	cin >> n;

	cout << "Enter the elements of the array\n";

	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int t;

	for (int i = 0;i <n;i++)//first iteration for element 0

	{for(int j=0;j<n;j++)//here all elements is compared.
		if (a[j] < a[j + 1])
	   {
		   t = a[j+1];
		   a[j+1] = a[j];
		   a[j] = t;
	   }
		}


		cout << "the sorted array is" << endl;

		for (int i = 0;i < n;i++)
			cout << a[i] << endl;

		cout <<" Hence the second smallest element is \n" << a[n - 2] << endl;


		//removing th duplicate elements in array//

		for (int i = 0;i < n;i++)

		{
			if (a[i] == a[i + 1])

			{
				for (int j = i;j < n;j++)
				{
					a[j] = a[j + 1];
				}
				n--;
			}
		}

		cout<<"array without duplicates is"<<endl;

		for (int i= 0;i < n;i++)
			cout << a[i] << endl;
		return 0;
	}