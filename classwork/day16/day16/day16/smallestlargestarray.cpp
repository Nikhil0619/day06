#include<iostream>

using namespace std;

int main()

{
	int a[7] = { -10, -20, 30, 40, 50, -60, 5 };

	int min=a[0];//initializing a value to compare with other values
	int max = 0;//initializing a value to compare with other values

	for (int i = 0; i < 7; i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}


	cout<<"the smallest element is  "<<min<<endl;
	cout<<"the largest element is  "<<max<<endl;

	return 0;
}