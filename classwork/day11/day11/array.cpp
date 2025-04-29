#include<iostream>
using namespace std;

int main()
{
	int a[10];int countOdd;int countEven;
	
	for (int i = 0, countOdd = 0; i < 10; i++)
	{
		if (i % 2 != 0)
		{
			a[countOdd] = i;
			countOdd++;
		}
	}

	for (int i = 0,countEven=10/2;i < 10;i++)
	{
		if (i % 2 == 0)
		{
			a[countEven] = i;
			countEven++;
		}
	}

	cout << "The odd and even elements are" << endl;
	
	for (int i = 0; i < 10; i++)
	
    cout<<a[i]<<endl;

	

	return 0;
}