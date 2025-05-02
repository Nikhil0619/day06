/*You are given an array A of size N containing positive integers. For each element in the array, count the number of elements to its right that are smaller than the current element.

Your task is to compute and print a list of counts corresponding to each element*/

#include <iostream>
 using namespace std;
 int main()
 {
	 int n;
	 int a[100];
	 int count = 0;

	 cout << "enter the size of the array";
	 cin >> n;

	 if (n <= 0)
	 {
		 cout << "Sorr!size of array must be positive!" << endl;
		 return 0;
	 }

	 cout << "Enter the elements of the array";
	 for (int i = 0; i < n; i++)
	 {
		 cin >> a[i];
	 }

	 cout << "The counts of elements smaller than the current element are " << endl;
	 for (int i = 0; i < n; i++)
	 {
		 count = 0;
		 for (int j = i + 1; j < n; j++)
		 {
			 if (a[j] < a[i])
			 {
				 count++;
			 }
		 }
		 cout << "the count is" << count << " " << endl;

		 cout << "printing the  integers(separated by space)  with the given condition";
		 cout << endl;

		 for (int i = 0; i < n; i++)
		 {
			 for (int j = i + 1; j < n; j++)
			 {
				 if (a[j] < a[i])

					 cout<<a[j] << " ";
				 break;
		
			 }
		 }
		 cout << "0";



		 return 0;
	 }
 }
 

 



