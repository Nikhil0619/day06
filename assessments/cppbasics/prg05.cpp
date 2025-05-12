//Write a Program to Check Whether a Character is a Vowel or Consonant

#include<iostream>

using namespace std;

int main()

{

	char ch;

	cout << "Enter a character";
	cin >> ch;

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

	{
		cout << "The charcater is a vowel!";

	}
	
	else
		cout <<" it is a consonant ";

	return 0;
}