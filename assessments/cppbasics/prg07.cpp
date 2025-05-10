//Write a Program to Find the Length of the String Without using strlen() 

# include <iostream>

using namespace std;

int main()

{
	char a[100];
	int i = 0;

	cout << "Enter the character string\n";
	cin >> a;//use cin.getline(a,100) for white space

	while (a[i] != 0)// or while(a[i])

	{
		i++;
	}

	cout << "the length of the word is\n" << i << endl;

	return 0;
}

