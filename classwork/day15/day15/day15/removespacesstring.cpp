#include<iostream>

using namespace std;

int main()

{
	char a[100];
	char b[100];

	cout<<"Enter a string" << endl;

	cin.getline(a, 99);
	int i, j;
	for (i = 0;i < strlen(a);i++)
	{
		for (j = 0;i < strlen(a);i++)
		if(a[i] != ' ')
		{
			b[j] = a[i];
			j++;
			}
		}
	b[j] = '\0';// null character to terminate the string
  cout << b << endl;

			return 0;
	}
