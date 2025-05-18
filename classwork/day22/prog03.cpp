#include<iostream>

using namespace std;

int *func(int a)//returns an integer pointer/address

{
	int sum = 0;//static int sum=0 will keep the address throughout.fixes dang ptr issue
	sum += a;
	cout << "BA of sum=" << (unsigned long int) & sum << endl;

	return &sum;
}//after the functions runs the memory gets deleted hence a lost reference.

//if ptr is pointing to any address then it fixes the dangling pointer issue.

int main()

{
	int* ptr = func(101);

	cout << *ptr << "\t Address of sum=" << (unsigned long int)ptr << endl;

		*ptr = 202;
	ptr = func(303);

	cout << *ptr << endl;
}