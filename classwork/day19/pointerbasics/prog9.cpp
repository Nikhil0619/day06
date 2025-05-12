//write a program to sort a list in an ascending order using pointers.
//store,sort, print

//create containers first

#include<iostream>

using namespace std;

int* allocMem(int*, int);
int getValues(int*, int);
int sortAsc(int*, int);
void disp(int*, int);
void swap(int&, int&);

int* allocMem(int *p, int size)//here we are not passing the BA

{
	p = (int*)malloc(size * sizeof(int));
		return p; }

int getValues(int *p,int n)

{
	for (int i = 0;i < n;i++,j++)
		cin >> *p;

	return 0;
}
int sortAsc(int *p,int n)

{
	int i = 0;
	int j;

	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
		{if(p[i]<p[j]),swap(p[i],p[j]) }
}

	int swap(int& x, int& y)

	{
		int x;
		t = x;
		x = y;
		y = t;
		return 0;
	}

	void disp(int* p, int n)
	{
		int i = 0;
		while (i < 0)
		{
			cout << p++ << "\t";
			i++;
		}
	}

		int main()
		{
			int* ptr = nullptr;
			int n = 5;
			ptr = allocMem(ptr, n);
			getValues(ptr, n);

			cout << "before sort\n";

			disp(ptr, n);
			sortAsc(ptr, n);
			cout << "After sort" << endl;
			disp(ptr, n);

			return 0;
		}
