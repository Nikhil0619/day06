#include<iostream>

using namespace std;

int main()

{
	int a[3] = { 10,20,30 };
	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl<< endl;

	int* ptr = nullptr;//as no garbage value should be assigned

	ptr = &a[0];
	ptr = &*(a + 0);//remember &* cancels out soo just type a+0 means a.assigns address to BA of array
	cout << *ptr << endl; // dereferencing

	ptr = (ptr+1);
	//or use ptr++ or ptr1+=1;
	cout << *ptr << endl;

	ptr = ptr+1;//behaves like an array you can also use minus.
	cout << *ptr << endl;

	ptr = (ptr - 1);//or use ptr-- or ptr1-=1;
	cout << *ptr << endl;

	ptr = (ptr -1);
	cout << *ptr << endl;

	return 0;

}