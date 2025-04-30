/*

1) The basic salary is entered. House rent allowance is 40 % of basic salary & dearness
allowance is 20% of basic salary. write a program to calculate the gross salary.

*/

#include<iostream>

using namespace std;



int main() {
	float basic, hra, allowance, grosssal; 

	cout << " enter the basic salary" << endl;
	cin >> basic;

	hra = basic * (0.04);
	allowance = basic * (0.02);

	grosssal = basic + hra + allowance;
	cout << grosssalary << " is the gross salary";

	return 0;
}