#include<iostream>
using namespace std;

int main()
{
	int n;
	int i j,k,l;
	for (int i = 0;i <= n;i++)
	{ 
		for (int j = 0;j <= i;j++)
		{
			cout << "*";

			for (k = 0;k <((2* n) - (2*i));k++)

				cout << " ";


			for (int j = 0;j <= i;j++)

				cout<< "*";

				cout << endl;
		}

		
			
			for(int i=n-1;i>=0:i--)//rows
			{
				 (int j = 0;j <= i;j++)
			
				cout << "*";


				 for (k = 0;k < (2 * n) - (2 * i);k++)


					cout << "*";


				for (int j = 0;j <= i;j++)

					cout << endl;

		return 0.
}