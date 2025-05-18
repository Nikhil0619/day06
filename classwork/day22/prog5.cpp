//getting datatype size using structures.

/*structures
//related  items are bunched together*/

//struct deckaration formats

//struct uddt{};//not fixed
//struct{}v1,v2,v3;//has fixed elements
//struct uddt{contents};struct uddtv[10];or struct uddt v1,v2,v3;

#include<iostream>

using namespace std;

/*
struct<tageName>
{members;
};
*/

typedef struct Employee //like an alias say nik nikky

{
	int empID;

	long int empPhno;
	string empName;//this dynamically grows
	string empAddress;
	char empGender;
}EMP;//structure defintion should be within the main also use Caps
/*ideally should typedef struct Person {
long int empPhno;
string empName;//this dynamically grows
string empAddress;
char empGender;
};*/


void disp(EMP);
int main()
{
	EMP E1;
	E1.empID = 101;
	E1.empName = "Nikky";
	E1.empAddress = "Mundamala";
	E1.empGender = 'M';
	E1.empPhno = 9497333792;

	cout << "Size of EMP :" << sizeof(EMP) << "\t size =" << sizeof(E1) << endl;
	cout << "Name: " << E1.empName << endl;
	cout << "ID :" << E1.empID << endl;
	cout << "Gender :" << E1.empGender << endl;
	cout << "Address is :" << E1.empAddress << endl;
	cout << "Phone number :" << E1.empPhno << endl;

	EMP E[3];
	for (int i = 0;i < 3;i++)
	{
		cout << "Name: "; cin >> E[i].empName;
		cout << "ID :";cin >> E[i].empID;
		cout << "Gender :";cin >> E[i].empGender;
		cout << "Address is :";cin >> E[i].empAddress;
		cout << "Phone number :";cin >> E[i].empPhno;

	}

	for (int i = 0;i < 3;i++)
	{
		cout << "Name: " << E[i].empName << endl;
		cout << "ID :" << E[i].empID << endl;
		cout << "Gender :" << E[i].empGender << endl;
		cout << "Address is :" << E[i].empAddress << endl;
		cout << "Phone number :" << E[i].empPhno << endl;
		cout << "=====================" << endl;

	}

	cout << endl;

	disp(E1);

	void disp(EMP e)

	{
		cout << "=====================" << endl;
		cout << "Name: " << E1.empName << endl;
		cout << "ID :" << E1.empID << endl;
		cout << "Gender :" << E1.empGender << endl;
		cout << "Address is :" << E1.empAddress << endl;
		cout << "Phone number :" << E1.empPhno << endl;
	}
	return 0;
}

int getEMPDetails(EMP* e)

{//	cout << "Name: "; cin >> e->empName;//when using pointers this is the way to access.
	cout << "ID :";cin >> E[i].empID;
	cout << "Gender :";cin >> E[i].empGender;
	cout << "Address is :";cin >> E[i].empAddress;
	cout << "Phone number :";cin >> E[i].empPhno;
}
