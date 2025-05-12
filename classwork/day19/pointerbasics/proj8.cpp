//pass pointers to a function
#include<iostream>
using namespace std;

void swap1(int, int);//call by value
void swap2(int*, int*);//call by pointer
void swap3(int&, int&);//call by ref AKA catch by reference

int main()
{
	int a = 10;
	int b = 20;

	cout << "In Main(Before swap)\n" << " " << a << " " << b<<endl;
	swap1(a, b);

	return EXIT_SUCCESS;
}

void swap1(int a, int b)

{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "In swap1 fumction \n " << a << "\t" << b << endl;
}

void swap2(int *a,int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;

	cout << "In swap2 fumction \n " << *a << "\t" << *b << endl;
}

void swap3(int a,int b)

{
	int t;
	t = a;
	a = b;
	b = t;

	cout << "In swap2 fumction \n " << a << "\t" << b << endl;
}