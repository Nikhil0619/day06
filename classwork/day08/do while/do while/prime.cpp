#include<iostream>

bool isPrime(int);

using namespace std;

int main()

{
	int n;
	cout << "Enter the number";
	cin >> n;
	bool ret = isPrime(n);
	if(ret==true)
	cout << "Given Number:" << n << "is a prime number" << endl;
	else
		cout<< "Given Number:" << n << "is not a prime number" << endl;
	
	return 0;
}


bool isPrime(int n)
{
	bool flag = false;
	if (n <= 1)
		return false;
	for (int i = 2;i <n ;i++)
	{
		{
			if (n % i == 0 )
				flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;

}