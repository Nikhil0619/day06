#include<iostream>

using namespace std;


int main()
{// calculate the aggregate and percentage
	int s1, s2, s3, s4, s5, per;
	cout << "enter the marks of 5 subjects" << endl;
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	if (s1 > 100 || s2 > 100 || s3 > 100 || s4 > 100 || s5 > 100)
	{
		cout << "error";
		return 0;
	}
	per = s1 + s2 + s3 + s4 + s5;
	cout << "the agregate marks sum = " << per << endl;


	per = (per / 5);

	cout << "percentage= " << per << "%";


	return 0;
}