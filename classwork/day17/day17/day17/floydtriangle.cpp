#include<iostream>
using namespace std;

int main()

{
	int c =1;

	int n;
	cin >> n;
	cout << endl;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0; j <= i;j++)
			cout << c++;
		cout << endl;
	}

	return 0;

}