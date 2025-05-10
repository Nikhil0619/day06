//Write a Program to Print Check Whether a Character is an Alphabet or Not

#include<iostream>

using namespace std;

int main()

{
	char ch;

	cout << "Enter a character :";

	cin >> ch;

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch >= 'Z'))
	{
		cout << "The character is an alphabet";
	}

	else
		cout << "the character is not an alphabet";

		return 0;
}