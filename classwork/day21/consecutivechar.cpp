//remove consecutive characters in a word.

#include<iostream>

using namespace std;

string findConsecchars(char *);

string findConsecchars(char* a)

{
	string b = " ";
	int count = 0;

  for (int i = 0;i < strlen(a);i++)
	{
		if (a[i] != a[i + 1])
		{
			b = b + a[i];
			 count++;
		}
	}
	
  cout << "\nNumber of amendments done=" << count;
	return b;
	



	////////////


	//int j = 0, i = 0;

	//while (a[i])
	//{
	//	if (a[i] != a[i + 1])
	//	{
	//		a[j++] = a[i];//concantenate join
	//	}
	//	i++;
	//}
	//a[j] = 0;


	//return a;





}

int main()

{
	char a[1000];

	cout << "Enter the word/string\n";

	cin.getline(a, 600);

	cout << "The word after the removal of the consecutive characters is \n" <<
		findConsecchars(a);

	return 0;
}