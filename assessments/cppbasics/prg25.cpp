// Program to check whether a word is palindrome or not

#include<iostream>
#include<cstring>
using namespace std;

int main()

{
	char ch[100];

	bool flag = true;

	cout << "Enter the word\n";
	cin.getline(ch, 100);

	int l = strlen(ch);

	for (int i = 0;i < l / 2;i++)
	{
		if (ch[i] != ch[l - i - 1])//compares first half with second half.
		{

			flag = false;
			cout << "The word is not a palindrome\n";
			return 0;
		}
	}

	if (flag == true)
	{
		cout << "The word is a palindrome\n";
	}

	return 0;
}