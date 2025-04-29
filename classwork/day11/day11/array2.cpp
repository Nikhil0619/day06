#ifdef __INTELLISENSE__
#pragma  diag_suppress 28

#endif

#include<iostream>

using namespace std;

int main()
{

	int a[]= { 11, 13, 12, 15, 8, 6, 4, 3, 7, 1 };

	constexpr int noElems= sizeof(a) / sizeof(a[0]);//will have constant value 10

	int outputArr[noElems];

	cout << "No of Elements present:" << noElems << endl;

	for (int i = 0; i < noElems; i++)
	
		cout << a[i] << endl;
	
	return 0;
}