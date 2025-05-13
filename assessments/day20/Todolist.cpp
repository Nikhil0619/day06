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
	

	cout << "---Choose a choice from the following----\n" << endl;


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
	int count;
	
	if (c == 1)
	{
		cout << "Whats up,what are you planning to do today?\n";
		cin >> ch;
		flag = 1;
		

		if (flag == 1)
			cout << ch <<"\t" <<"Task is activated!\n";

		cout << "Are you done with the task Y/N/y/n\n";
		cin >> n;

		if (n == 'Y'|| n=='y')
		
			cout << "GOOD JOB!";
		if (n == 'N'|| n=='n')
		{
			cout << "please hurry up, the time is ticking!";
			exit(0);

		}
			cout << "\nDo you want to list the active tasks?if so enter 1\n";
			cin >> count;
		

		  if (count==1)
			listTask(count);
		else
			exit(0);


	}
}
bool deleteTask(int c)

{
	int b;
	char d;
	cout << "\n Would you like to delete a task today- y/Y?";
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

void listTask(int n)

{
	char s;
	cout << "shall we display the current tasks being done?\n enter choice y/Y\n";
	cin >> s;

	if (s == 'y' || s == 'Y')

		cout << ch<<" task is active";
	else
		cout << "invalid choice";
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






