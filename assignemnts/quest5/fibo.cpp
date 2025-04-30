#include<iostream>
using namespace std;
int fib(int);

int main()
{
	int num;
	int ret;
	cout << "enter a positive number: \n";
	cin >> num;
	cout << "the fibonacci sequence is :" << endl;
	for (int i = 0; i <= num;i++)
	{
		ret = fib(i);
		cout << ret << " ";
	}
	cout << "nth fib no is: " << ret;
