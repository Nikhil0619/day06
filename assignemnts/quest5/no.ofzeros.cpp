/*Problem 4: Count Number of Zeros in a Number
Problem Statement :
Write a recursive function to count the number of zeros in an integer.
i / p : 102040
o / p : Number of zeros in 102040 is 3 */

#include <iostream>

using namespace std;

int countZeros( int n)

int main()

{
	int num;
	int ret;
cout << "enter number for the zeros present in it to be counted: " << endl;
cin >> num;
ret = countZeros(num);
cout << "the count of 0 : " << ret;


return 0;}


int countZeros(int n)
{

	int tmp = n % 10;
	int count = 0;

	if (n == 0)
		return 0;

	if (n % 10 == 0)
		return 1 + countZeros(n / 10);
	else
		return countZeros(n / 10);

}