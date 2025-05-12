//Write a Program to Calculate the Lowest Common Multiple(LCM) of Two Numbers

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	int i = 1;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	

	while (true)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout << "LCM is " << i;
			break;//to exit the loop
		}
		i++;
	}

	return 0;
}