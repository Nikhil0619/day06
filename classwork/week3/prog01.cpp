#include<iostream>
#include<stdio.h>
using namespace std;
int main()

{
	int arr[3];
	cout << "capsize of array=" << sizeof(arr)<<endl;
	cout << arr[0];
	cout<< arr[1];
	cout<< arr[2];

	printf <<"&u\n", arr[0];
	printf << "&u\n",arr[1];
	printf << "&u\n",arr[2];

}