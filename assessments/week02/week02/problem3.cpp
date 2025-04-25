# include<iostream>

using namespace std;

int main()


{
	int n;int p;
	int a, b, c;

	cout << "enter a number" << endl;

	cin >> n;

	p = n;

		a = p % 10;
		p = p / 10;
		b = p % 10;
		p = p / 10;
		c = p % 10;

		
	if ((a * a * a) + (b * b * b) + (c * c * c) == n)
	{
		cout << "the  number is armstrong number\n";
	}
	else
	{
		cout << "the number is not armstrong number\n";
	
	}

	return 0;
}