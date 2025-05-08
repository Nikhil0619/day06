#include<iostream>

using namespace std;

#define MAX 100


int main()

{
	int a[MAX], n;

	cout<<"enter the size of the array" << endl;
	cin>>n;

    cout<<"enter the elements of the array" << endl;

	for (int i = 0; i < n; i++)

		cin >> a[i];

	for (int i = 0; i < n; i++)

	{
		if (a[i] == a[i + 1])
			continue;
	
	else
		if (a[i] != a[i + 1])
		{
			cout << "unique is" << a[i+1] << endl;
		}
	}

	return 0;


}