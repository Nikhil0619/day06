
//function with no arguments and no return type
#include<iostream>

using namespace std;

void display(void);// function prototype

int displayRet();

void sumInteger(int a, int b);

int main()

{
	int ch;

	cout<<"enter your choice"<<endl;	
	cin >> ch;  

	switch (ch)

	{
	default:
		cout << "Wrong choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
		sumInteger(10, 20);
		break;
	case 2:
		cout << "Subtraction" << endl;
		break;
	case 3: cout << "Multiplication" << endl;
		break;
	}

//display();
	return 0; }

void display()

{
	{
		cout << "Press," << endl;
		cout << "Addition" << endl;
		cout<< "Subtraction" << endl;
		cout<< "Multiplication" << endl;
		cout<<"Exit" << endl;
	}
}

void sumInteger(int a, int b)
{
	cout << "Sum of two integers is: " << a + b << endl;
}