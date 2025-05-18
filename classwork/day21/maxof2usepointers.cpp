//maximum of two numbers using pointers.

#include<iostream>
using namespace std;
int mxF2(int *a, int *b);//or use int mxF2(int *,int *);
void display(int);

void AppName(char*);

int mxF2(int *a,int *b)
{ int retValue = 0;
char appName[50] = "MAX OF TWO NUMBERS";
AppName(appName);
display(20);
//ba of element0;


//LOGIC TO FIND MAX OF 2 AND ASSIGN TO retValue//

if (*a > *b)
retValue = *a;
else
retValue = *b;

return retValue;//returns int value

}

void display(int n)

{
	for (int i = 0; i < n;i++)
		cout << "*";
	cout << endl;
}

void AppName(char x[20])

{
	cout << "App name";
}

int main()

{
	int a, b;
	cout << "Enter the two numbers\n";

	cin >> a >> b;

	cout << "The greatest of the given two numbers is\n" << mxF2(&a, &b);

	return 0;

}