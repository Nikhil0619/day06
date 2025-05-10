// C++ program to convert any decimal to any base..usually binary or octal or hexadecimal(?)

#include<iostream>
using namespace std;

int conv2Dec(int, int);

/*user input:1st argu decimal value,2nd arg to the base for conversion return:
converted base value*/

int main()
{
	cout << conv2Dec(5, 2);
}

int conv2Dec(int num,int base)

{
	int r;

	int place = 0;
	int sum = 0;

	while(num)//means num!=0

	{
		r = num % base;
		sum=sum+r*pow(10,place);
		num = num / base;
		place++;;

	}

	return sum;
}