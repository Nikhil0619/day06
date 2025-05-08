#include<iostream>

using namespace std;

int main()

{
	int s, n;


	cout << "enter the range" << endl;
	cin >> s>>n;

	cout<< "odd numbers in range is " << endl;

	for (int i = s;i <= n;i++)
	{
		if (i%2!=0)
			cout <<i<< endl;
		
	}

	return 0;
}