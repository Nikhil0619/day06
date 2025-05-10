
//Write a Program to Toggle Each Character in a String

#include<iostream>

using namespace std;

int main()

{
	char ch[100];
	int i=0;

	cin.getline(ch, 100);

	while (ch[i])

	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;//lower to upper a ASCII value is 97 and A is 65
		}
		else if ((ch[i] >= 'A' && ch[i] <= 'Z'))
		{
			ch[i] = ch[i] + 32;//upper to lower
		}
		i++;
	}

	cout << "The toggled string is\n" << ch << endl;

	return 0;
}