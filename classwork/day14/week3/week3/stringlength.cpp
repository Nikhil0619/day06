#include<iostream>

using namespace std;

int main()

{
	char S1[150];

	cout<< "enter the string" << endl;
	cin>> S1;
	int count = 0;

	while (S1[count] != '\0')
	{
		count++;
	}

	cout << "the length of the string is"<<" "<<count<<endl;

		return 0;
}