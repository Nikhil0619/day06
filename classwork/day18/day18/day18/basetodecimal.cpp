#include<iostream>
using namespace std;

int base2Dec(int, int);

int base2base(int num, int b1,int b2);//this is how the prototype looks like

/*user input:1st argu base value,2nd arg to the decimal for conversion return:
converted decimal value*/

int main()
{
	cout << base2Dec(101, 2);//arg passed explicitly
}

int base2Dec(int num, int base)

{
	int r;

	int place = 0;
	int sum = 0;

	while (num)//means num!=0

	{
		r = num % 10;
		sum = sum + r * pow(base, place);/*we can convert to a single function 
		means a prototype vekam i.e int base2base(int)*/
		num = num / 10;
		place++;

	}

	return sum;
}