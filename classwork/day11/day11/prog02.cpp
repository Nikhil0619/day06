#include<iostream>

using namespace std;

int main()

{
	int arr[3] = { 101, 102, 103 };

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl; // gives garbage value

	for (int i = 0;i < 3;i++)
	{
		cout << arr[i] << endl;
	}

	arr[0] = 222;//update the value of first element
	arr[1] = arr[0] * 10;

	for (int i = 0;i < 3;i++)
	{
		cout << arr[i] << endl;
	}
return 0;

}