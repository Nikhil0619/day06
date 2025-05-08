//program to count number of times an alphabet appears in a string

#include<iostream>
using namespace std;

int main()

{
	char a[100];
	int count1 = 0;
	cout << "enter the word\n";
	cin.getline(a,99);

	for (int i = 0; a[i] != '\0'; i++)
	{
		if ( (a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
     count1=count1+1;
     cout << "The character" <<" "<<a[i] <<" " << "appears" << " "<<count1 << "time" << endl;
		}
	}
	

	return 0;
}