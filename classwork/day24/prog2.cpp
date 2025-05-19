#include<iostream>

using namespace std;

int main()

{
	int* ptr = (int*)malloc(sizeof(int));//allocates one int
	*ptr = 10;//assign value 10 to the address pointed by ptr.

	int* p = new int(10);//same as the lines above.

	cout << *ptr << "\t" << *p << endl;

	cout << "sizeof(ptr)" << sizeof(*ptr) << endl;
	cout << "sizeof(p)" << sizeof(*p) << endl;

	int* a = new int[10];//10 different integers

	cout << sizeof(a) << "\t" << sizeof(*a)<<endl;

	for (int i = 0;i < 10;i++)
		a[i] = (i + 1) * 2;
	for (int i = 0;i < 10;i++)
		cout << *a++;

	/*

	EMP* e = new EMP[10];

	EMP* e1 = new EMP{ 101,"Nikhil" };

	cout << e1->id << "\t" << e1->name << endl;

	delete e1;// to delete single element
	delete[]e;//delete the whole array.*/
	return 0;
}