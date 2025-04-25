#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int marks;char name;int i;
	int id;int avg;float sum = 0;
 printf( "Enter marks of 5 students: ");
 for ( i = 0; i < 5; i++)
 {
  scanf >> marks;
 }
 cout << "Marks of students are: ";
 for ( i = 0; i < 5; i++)
 {
  cout << marks[i] << " ";
  sum=sum + marks[i];
 }
 avg = sum / 5;
 cout << endl;
 return 0;


}