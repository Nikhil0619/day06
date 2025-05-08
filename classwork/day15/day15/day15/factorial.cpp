#include<iostream>

using namespace std;

int main()

{
	int n;
	int product = 1;

	cout << "Enter a number";
	cin >> n;
	/*for (int i = 1;i <= n;i++)

	{
		product = product * i;
    }*/
	cout << " the factorial of " << " " << n;
	while(n!=0)
	{
		product = product * n;
		n--;
	}

	cout << " is =" << product << endl;

	return 0;
}