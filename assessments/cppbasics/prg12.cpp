//Write a Program to Remove Spaces From a String

#include<iostream>
using namespace std;
int main()

{
	char ch[100];
	int i = 0;
	int j = 0;

	cout << "Enter the word\n";

	cin.getline(ch, 100);

	for (i = 0;ch[i]!='\0';i++)
	{
		if (ch[i] != ' ')
		{
			ch[j] = ch[i];
			j++;
		}
	}

	ch[j] = '\0';
	cout << "Word without spaces is\n" << ch;
	return 0;
}