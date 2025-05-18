//Allocating and freeing a memory to a pointer.

#include<iostream>

using namespace std;

int main()

{
	int* ptr = (int*)malloc(sizeof(int) * 3);//4 bytes *3 memory bytes we have allocated.

	int* temp = ptr;

	cin >> *ptr;
    ptr++;
	
    cin >> *ptr;
	ptr++;
	
	cin >> *ptr;
	

	ptr = temp;

	for (int i = 0;i < 3;i++)
		cout << *ptr++ << endl;

	ptr = temp;//because ptr has moved alle in the last iteration soo reassigning.
	free(ptr);//freeing ba of that allocated value,the cpu can do it but in servers and all this will slow down.
	/*valgrind=mem leaks*/

	//free(ptr);this leads to stack smashing soo dont do it.
	cin >> *ptr;

	for (int i = 0;i < 3;i++)
		cout << *ptr++ << endl;

	return 0;
}