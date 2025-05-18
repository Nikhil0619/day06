//sum of arrays using pointers and functions.

#include<iostream>

using namespace std;

int sumArr(int *,int);//catches the BA of the array

int sumArr(int *ptr,int n)

{
	int sum = 0;
	//logic to calculate sum of the list
	//pointer converted to an array notation
	for (int i = 0;i < n;i++)

		sum = sum + ptr[i];

	return sum;
}

int main()

{
	int list[] = {1, 2, 3, 4, 5};
	int cap = sizeof(list) / sizeof(list[0]);
	cout << "\t" << sumArr(&list[0], cap) << endl;
	return 0;
}