#include<iostream>
using namespace std;

int main()

{
	int n;
	int i, j, k, l, m;

	cout << "enter the number";
	cin >> n;


	for(int row=1;i<=n/2;row++)
	{
	for (j=1;i <= n/2;j++)
		cout << "A";
	for (k=j;i < n;i++)
		cout << "*";
	cout << endl;


	for (int i = 0;i < n*(n/2);i++)
		
		cout << "*";
	cout << endl;


	return 0;

}