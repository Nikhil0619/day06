//Write a Program to Count the Number of Vowels

#include<iostream>
using namespace std;

int main()

{
	char ch[100];int i = 0;int count = 0;

	cout << "Enter the word\n";
	cin.getline(ch, 100);

	while (ch[i])

	{
		if ((ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'
			|| ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'))

		{	count++;
	}
		i++;
}
   cout<<"The number of vowels in the word is \n"<<count;

	   return 0;

	   }