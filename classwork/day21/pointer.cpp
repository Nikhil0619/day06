#include<iostream>

using namespace std;

int main()

{
	/* 
	//int* ptr = nullptr;//if not initialised it returns garbage values which can be risky,becomes a wild pointer

	int a = 10;

	cout << a << endl << &a<<endl;/*the address will keep changing,
	address we get in hexadecimal but we can convert using unsigned long int

	cout << ptr <<endl<< &ptr;//the address will keep changing

	ptr = &a;

	cout << endl<<ptr;

	//deferencing pointer

	cout << endl << *ptr<<endl;

	*ptr = 20;//value is changed

	cout << a << endl<<*ptr;
	*/

	int b[3] = { 1,2,3};

	cout << b[0] << endl << b[1] << endl << b[2];
	int* ptr = nullptr;
	
	ptr = &b[0];
	cout << endl << *ptr;

	ptr = &b[1];

	cout << endl << *ptr;

	cout << endl << (*ptr+1) << endl;//BA plus 1

	for (int i = 0;i < 3;i++)
	{
		cout << *ptr << endl;
		ptr++;
	}

	return 0;
}