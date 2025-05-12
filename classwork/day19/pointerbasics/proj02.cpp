
//remember pointers and arrays behavior are same.
#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int* ptr = nullptr;

	ptr = &a;

	//accessing the value of a using ptr.

	cout << *ptr << endl;

	//update the avlue of a using ptr.
	*ptr = 101;

	//accessing the value of a using tr.
	cout << *ptr << endl;
	cout << a<<endl;

	ptr = &b;

	//update the avlue of a using ptr.
	cout << *ptr << endl;

	ptr = &c;


	//update the avlue of a using ptr.
	cout << *ptr << endl;

	return 0;
}


