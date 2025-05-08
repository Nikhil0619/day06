#include<iostream>
using namespace std;

int main()

{
	char ch;

	cout<< "enter the character" << endl;
	cin>> ch;


	int i= (int)ch;

	if ((i >= 65 && i <= 90) || (i>=97 && i<=122))
	
	{
	cout << "it is a alphabet" << endl;
	}
	else
	{
	cout << "it is not a alphabet" << endl;
	}

	return 0;
}