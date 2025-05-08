#include<iostream>
#define MAX 100

using namespace std;

int main()

{
	char ch[MAX];

	cout<<"Enter the string" << endl;
	cin.getline(ch,MAX-1);

	int count = 0;

	for (int i = 0;i < strlen(ch);i++)

	{
		if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')

		{
			ch[i] =" ";

		}

		cout << ch;
	}

	return 0;
}