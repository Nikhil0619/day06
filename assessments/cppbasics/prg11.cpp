// Write a Program to Remove All Characters From a String Except Alphabets
#include<iostream>
using namespace std;

int main()
{
	char ch[100];
	int i = 0;
	int j = 0;

	cout << "Enter the word\n";
	cin.getline(ch, 100);

	for (i = 0;ch[i] != 0;i++)
	{
		if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
		{
			ch[j]=ch[i];
			j++;
		}
	}

	ch[j] = '\0'; // Null terminate the string else garbage will be printed

	cout << "the  word only with alpbhabets is" << " " << ch;

	return 0;
}