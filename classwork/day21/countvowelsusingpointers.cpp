#include<iostream>

using namespace std;

int findVowels(char*);

int findVowels(char* a)//only BA has been passed.
{
	int count = 0;

	for (int i = 0;i < strlen(a);i++)
	
	{
		if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'
			|| a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')

			count++;}

		return count;
}
int main()

{
	char a[1000];

	cout << "Enter the word/string \n";

	cin.getline(a, 150);

	cout<<"The number of vowels in "<<a<<" is\n"<<findVowels(a);


	return 0;


}