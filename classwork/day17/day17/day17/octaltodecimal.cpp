#include<iostream>
using namespace std;

int main()

{
	int octal=77, decimal=0, place = 0;

	int temp;

	int digit;

	temp = octal;

	while (temp)
	{
		int digit = temp % 10;
		temp =temp/ 10;

		decimal =decimal+ digit * pow(8, place);
		place=place+1;
	}
	cout << "the decimal value of the given number is\n" << decimal << endl;

	return 0;

}