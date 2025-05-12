#include<iostream>
using namespace std;

int main()

{

int a = 10;
	//int* ptr = (int*)10;

	//int* ptr = &a;


	//store a value in an address and make the address pointed to the pointer
	//unsigned long int will give the value.

    int* ptr = (int*) malloc(sizeof(int)*3);
	int* temp = ptr;
	cout << "Address of ptr=" << (unsigned long int)ptr << endl;
     *ptr = 202;
	 ptr++;
	 cout << "Address of ptr=" << (unsigned long int)ptr << endl;
	 *ptr = 203;
	 ptr++;
	 cout << "Address of ptr=" << (unsigned long int)ptr << endl;
	 *ptr = 301;

	 ptr = temp;
	cout << *ptr << endl;
	cout << *ptr++ << endl;
	cout << *ptr++ << endl;
	
	return 0;
}