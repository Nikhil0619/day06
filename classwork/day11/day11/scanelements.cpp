#include<iostream>
//#define CAP 100

using namespace std;
const int CAP = 10;

int main()
{
	int arr[10];
	int c;

	cout<< "give atleast 11(max100) elements of the array" << endl;

		for (int i = 0; i < CAP; i++)
		cin >> arr[i] ;

	cout<<"give any value to see if its present in array"<<endl;
	cin >> c;
	for (int i = 0; i < CAP; i++)
	{
		if (c == arr[i])
		{
			cout << "found element" << endl;
		}
		else
		{cout<< "not found" << endl;
		}
		
		return 0;
	
}
