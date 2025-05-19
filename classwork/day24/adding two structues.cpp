#include<iostream>
using namespace std;

/*
int main()

{
	struct shape

	{
		float length;
		float width;
	};


	shape s1;
	shape s2;
	s1.length = 10;
	s2.length = 20;
	s1.width = 30;
	s2.width = 40;

	shape s3;

	s3.length = s1.length + s2.length;
	s3.width = s1.width + s2.width;

	cout << s3.length << "\t" << s3.width;

	return 0;

}*/

struct Date
{
	int day, month, year;
};




 typedef struct address
{
	int hno;
	int pincode;
	string addLine1;
	string addrLine2;
	string city;
	string State;
}ADDRESS;

 struct Employee
 {
	 int id;
	 string name;
	 struct DATE {     //structure within a structure declaration.
		 int day, month, year;
	 }D;
	 Date joiningDate;//of user defined Datatype i.e Date
	 ADDRESS addr;
 };



int main()

{
	Employee e;
	cout << sizeof(e) << endl<< sizeof(Date)<<endl;
	e.id = 101;
	e.name = "Nik";
	e.joiningDate.day = 10;
	e.joiningDate.month = 4;
	e.joiningDate.year = 2025;

	cout << e.id<< "\n" << e.name <<"\n"<<
		e.joiningDate.day << "\n" <<e.joiningDate.month<<"\n" <<
		e.joiningDate.year<<"\n";

	
	e.D.day =10;

	cout << e.D.day;
	return 0;

}
