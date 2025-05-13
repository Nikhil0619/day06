//Simple Program to make a to do List.

#include<iostream>
#include<cstring>

using namespace std;

char ch[100];

void createTask(int);
bool deleteTask(int);
void searchTask(int);
void listTask(int);


int main()

{
	int choice;
	

	cout << "---Choose a task from the following----\n" << endl;


	cout << "1-Create a Task\n";

	cout<< "2-Delete the Task\n";

	cout << "3-Search for a Task\n";

	cout << "4-List the Tasks\n\n";

	cin >> choice;

	switch (choice)
	{case 1: 
		if (choice == 1)
			createTask(choice);
		break;
	case 2:
		if (choice == 2)
			deleteTask(choice);
		break;

	case 3:
		if (choice == 3)
			searchTask(choice);
		break;
	
	
	default:
		cout << "\nYou have chosen the wrong choice\n";
		break;

	}

	return 0;
}

void createTask(int c)

{
	
	bool flag;
	char  n;
	int count=0;
	
	if (c == 1)
	{
		cout << "whats up,what are we planning to do today?\n";
		cin>>ch;
		flag = 1;


		if (flag == 1)
			cout << ch <<"ing \t" << " Task activated!\n";

		cout << "Are you done with the task Y/N\n";
		cin >> n;

		if (n == 'Y')
			cout << "GOOD JOB!";
		if (n == 'N')
		{
			cout << "please hurry up, the time is ticking!";
		
		}

	}
}
bool deleteTask(int c)

{
	int b;
	char d;
	cout << "\nWould you like to delete a task today- y/Y?";
	cin >> d;

	if (d != 'Y' && d != 'y')

	{
		cout << "\nIt should be either y or Y\n";
		exit(0);
	}

	else if(d=='Y'|| d=='y')
	cout << "\n Type 2 for deletion\n";
	cin >> b;

	if (b == c)
	{
		cout << "Hurrah!We have successfully deleted the task\n";
		return true;
	}
	else
		return false;

}

void searchTask(int c)

{
	char y[100];
	cout << "Enter the task you are searching for";

	cin >> y;

	if (y == ch)
	{
		cout << "the task is in progress";
	}

	else
		cout << "task not found";
	}






