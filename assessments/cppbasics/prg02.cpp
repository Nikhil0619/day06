//Write a Program to Find the Greatest of the Three Numbers

#include<iostream>
using namespace std;

int main()

{
	int a, b, c;

	int temp;

	cout << "Enter three numbers \n";
	cin >> a >> b >> c;

	if (a >b && a>c)
	{
		temp = a;
	}
	else if (b >a && a>c)
	{
		temp = b;
	}
	else
	{
		temp = c;
	}

	cout << " the greatest number is " << temp << endl;

	return 0;
	
}