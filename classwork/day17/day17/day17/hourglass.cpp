/*https://www.geeksforgeeks.org/cpp-coding-interview-questions-and-answers*/
//Qn30//

#include<iostream>
using namespace std;

int main()
{
	int i, j, n, k;

	cout << "Enter the size of the pattern\n";

	cin >> n;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < i; j++)//loop prints spaces
		{
			cout << "+";
			cout << endl;
		}
		for (k = 0;k < (n - i);k++)//this loop prints stars for each row
		{
			cout << "*";
			cout << endl;
		}
	}

	for (j = 0;j < n - i; j++)//loop prints spaces
	{
		cout << "*";
		cout << endl;
	}


	for (i = 0;i < n;i++)

	{
		for (j = 0;j < n - i - 1;i++)//loop prints spaces
		{
			cout << "+";

			for(k = 0;k <= i;k++)//this loop prints stars for each row
			{
					cout << "*";
					cout << endl;
				}
				cout << endl;
			}
		}
	return 0;
}