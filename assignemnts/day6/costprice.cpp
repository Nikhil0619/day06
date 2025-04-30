/*

2) The selling price & profit are entered. Write a program to calculate cost price of item.

*/

#include<iostream>

using namespace std;

int main() {

	float sp, profit, cp;

	cout << "enter the selling_price" << endl;
	cout<< "enter the profit" << endl;
	cin >> sp >> profit;

	cp = sp - profit;
	cout << "the cost price" << cp;
	return 0;
}