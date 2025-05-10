#include<iostream>
using namespace std;

int main()

{
	int octal = 0, decimal = 55;

	int temp;int remainder;

	temp = decimal;

	while (temp!=0)
	{remainder = temp % 8;
		octal=temp*10+ remainder;
		
	}
	cout << "the decimal value of the given number is\n" << octal << endl;

	return 0;

}