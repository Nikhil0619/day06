#include<iostream>

using namespace std;

int main()

{
	int a[3] = { 10,20,30 };
	int* ptr = a;// means a[0]

	cout << *ptr++ << endl;

	cout << *++ptr << endl;//this points to the next location

	cout << *ptr++ << endl;

	ptr = a;// reassign to the BA


	int prod = *ptr * *ptr;

	cout << prod;

	cout << sizeof(ptr) << " " << sizeof(void*) << endl;

	return 0;
}