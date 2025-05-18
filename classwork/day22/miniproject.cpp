# include<iostream>

using namespace std;

typedef struct Employee 

{
	int empID;
	string empName;
	
}EMP;

typedef struct period
{
	int Empid;
	int days;
}Per;

typedef struct salary
{
	int Empid;
	float basicp;
	float variablep;
	float allowances;
}Sal;

float calcsal(Sal, Per);

float calcsal(Sal,Per)

{
	EMP E1[100];
	Sal S1[100];
	Per P1[100];
	int n;
	bool flag;
	cout << "Enter the number of employees";
	cin >> n;
	cout << "Enter the Employee details in order of Employee ID,basicpay,variablepay ";
	cout << "Allowances and days worked";

	for (int i = 1;i <= n;i++)

	{
		cin >> E1[i].empID;
		cin >> S1[i].basicp;
		cin >> S1[i].variablep;
		cin >> S1[i].allowances;
		cin >> P1[i].days;

		if (S1[i].basicp + S1[i].variablep + S1[i].allowances >= 4, 00, 000)
			flag = 0;

		if (flag == 1)
			cout << "There will be a tax deduction";
}


	void display()
	int main()

	{
		calcsal()