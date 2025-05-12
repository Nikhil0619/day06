//Write a Program to Print the Given String in Reverse Order

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
		j++;
	}

	cout << "Word in reverse order is\n";
	for (i = j - 1;i >= 0;i--)//j-1 instead of j as we need to not include null character
	{
		cout << ch[i];
	}
	return 0;
}