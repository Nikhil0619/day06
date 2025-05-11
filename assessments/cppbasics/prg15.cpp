#include<iostream>
using namespace std;

int main() {
    int year;

   cout << "Enter the year";
    cin>> year;

    if (year % 4 == 0) 
    {
        if (year % 100 != 0 || year % 400 == 0) 
        {
            cout << "The year is a leap year";
        }
        else {
            cout << "The year is not a leap year";  // For years divisible by 100 but not 400
        }
    }
    else {
        cout << "The year is not a leap year";  // For years not divisible by 4
    }

    return 0;
}