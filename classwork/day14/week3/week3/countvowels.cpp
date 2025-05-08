#include<iostream>

using namespace std;

int main()

{
	char ch[100];

	cout<<"Enter the string" << endl;

	cin >> ch;

   int count = 0;

   for (int i = 0;i < strlen(ch);i++)
{
	{
		if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'|| ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')

		{
			count++;
		}
	}
}

cout << "the no.of vowels are" << count;

return 0;
}