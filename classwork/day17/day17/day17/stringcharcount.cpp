#include<iostream>
using namespace std;

int main()

{
	char ch[] = { 'A','B','C','D','1','2','3','4' };


	int sum = 0;

	for (int i = 0;i < strlen(ch);i++)

	{
		if ((ch[i] >= 48 && ch[i] <= 57))
			sum = sum + ch[i] - 48;

		else if ((ch[i] >= 65 && ch[i] <= 90))
			sum = sum + ch[i] - 65;
	}

	cout << "The sum of the digits is" << sum << endl;

	return 0;

}