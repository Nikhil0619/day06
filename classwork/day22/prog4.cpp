#include<iostream>

using namespace std;

void display(const char[]);

int main()

{
	char s[] = "Nikhil";
	display(s);//
	display("Abhijith");

	return 0;
}

void display(const char name[])

{
	while (*name != 0)
		cout << *name++ ;//contents of name plus plus
	cout<< endl;

	/*name[3]=H*/ //it is read only soo will give error.
}