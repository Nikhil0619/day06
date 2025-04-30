#include<iostream>
using namespace std;

int main()
{
	int r1, r2, c1, c2;
	int a[r1][c1], b[r2][c2], c[r1][c2];


	cout<< "Enter the rows and columns for the first matrix: ";
	cin>> r1 >> c1;
	cout<< "Enter the rows and columns for the second matrix: ";
	cin>>r2 >> c2;

	cout << "Enter the elements of the first matrix:" << endl;
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "Enter the elements of the second matrix:" << endl;
	{
		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				cin >> b[i][j];
			}
		}

	if (c1 != r2)
	{
		cout<< "Matrix multiplication not possible" << endl;
		break;
	
	}
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
			{
			c[i][j] = 0;
			for (int k = 0; k < c1; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}

		