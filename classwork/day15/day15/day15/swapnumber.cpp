#include<iostream>
using namespace std;

int main()

{
	int a, b;

	cout << "Enter two numbers: ";

	cin >> a >> b;

	a = a + b;// sum of a and b is stored in a
	b = a - b; // b is now equal to original a
	a = a - b; // a is now equal to original b

	cout<<"swapped values are:"<<a<<" "<<b<<endl;


	return 0;


}