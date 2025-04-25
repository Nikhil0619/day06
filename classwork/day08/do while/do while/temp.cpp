#include<iostream>
using namespace std;

int main()

{
	float temp;

	do
	{
		cout << "Enter temperature";
		cin >> temp;

		if (temp < 21)
		{
			cout << "Its cold!";
			break;
		}

		else if (temp >= 21 && temp <= 30)
		{
			cout << "Its ok!";
			break;
		}
		else
		{
			cout << "Its hot!";
			break;
		}
	} while (temp != 0);

		return 0;
	}

