#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	number(n);
}

int number(int n)
{
	
	for (int i = 1; i < =n; i++)
	{
		cout << " " << i;
		n--;
	}
	return 0;
}