 //Write a Program to Remove the Vowels from a String

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char ch[100];
		int i = 0;
		int j = 0;

		cout << "Enter the word\n";
		cin.getline(ch, 100);

		for (i = 0;i < strlen(ch);i++)
		{
			if (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u'
				&& ch[i] != 'A' && ch[i] != 'E' && ch[i] != 'I' && ch[i] != 'O' && ch[i] != 'U')
			{
				ch[j] = ch[i];
				j++;
			}
		}

		ch[j]= '\0'; // Null terminate the string else garbage will be printed

	
		cout << "the altered string is" << " " << ch;


		return 0;
}