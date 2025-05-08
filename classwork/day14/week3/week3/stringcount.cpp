#include<iostream>
using namespace std;
#define MAX 100

int main()

{
	char a[MAX];

	int Sum = 0;

	int counta;
	int countb;

	cout<<"Enter the string" << endl;

    cin.getline(a,MAX-1);

   for (int i = 0;i < strlen(a);i++)

   {
	if (a[i] == 'a')
	{
		if (a[i + 1] == 'r' && a[i + 2] == 'e')
			counta=i;
	}
	if (a[i] == 'i')
	{
		countb=i;
		break;
	}
    }

	Sum = counta + countb;

	cout << "Sum = " << Sum << endl;

	return 0;
}


