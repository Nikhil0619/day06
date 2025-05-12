//pointer pointing to addresses.

# include<iostream>

using namespace std;

int main()
{
	int a = 10;


	void* ptr = nullptr;
	ptr = &a;

	cout << "address of ptr = " << (unsigned long int) & ptr << " value is " << ptr << endl;

	ptr = &ch;

	cout << "address of ptr = " << (unsigned long int) & ptr << " value is " << ptr << endl;

	ptr = &f;


	cout << "address of ptr = " << (unsigned long int) & ptr << " value is " << ptr << endl;
	return 0;


}