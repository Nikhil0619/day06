#include<iostream>
using namespace std;

int pattern(int n);

int main()

{
	int n;

	cout<< "Enter the number of rows ";
	cin >> n;

	pattern(n);

	return 0;
}


int pattern(int n)

{
	int i;int k=(2*n)-2;int j;
	for(i = 0;i<n;i++)//no of rows
	{ for(j=0;j<=k;j++)//print white spaces
			cout << " ";
			k = k - 1;

	for ( j = 0;j <= i;j++)//print stars
	{
			cout << "*"<<" ";
		}

	cout << endl;

	}
	return 0;
}