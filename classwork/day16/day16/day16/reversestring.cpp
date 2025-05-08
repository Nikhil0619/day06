#include<iostream>
using namespace std;

int lenStr(const char* s);
char* revStr(const char* s,int i);



int lenStr(char s)
	{ int c = 0;
while (*s != '\0')
{
		c++;
		s++;
	}
return c; }

char* revStr(const char* s,int i)

{
	char t;
	for (int i = 0;i < l/2;i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i-1] = t;
	}
}

int main()
{
	char is[] = "hello";
	int l = lenStr(is);

	cout << "Enter the string\n";
	cin >> a;

	n= sizeof(a) / sizeof(a[0]);

	for (i = 0;a[i] != '\0';i++,n--)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}

	cout << "the reversed string is\n";
	a[i] = '\0';//to terminate the string
	cout << a;

	return 0;
}
