/*Write a program that performs the following tasks :

Finds the starting positions(0 - based index) of the substrings "are" and "i" in a given input string.
Calculates and prints the sum of these two positions.
If either of the substrings is not found in the input, treat its position as - 1.*/

#include<iostream>

using namespace std;

int main()

{
	int sum ;
	int a, b;
	char str[] = { "there are fruits in the basket" };


	sum=str.length[];
	a=str[6];
	b = str[13];

	cout << a << endl << b << endl;
	sum = a + b;

	cout<<sum<< endl;

	return 0;
}