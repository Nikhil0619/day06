#include<iostream>

int smallestDigit(int);
using namespace std;

int main()
{
	int num;
	cout << "Enter the number: ";
	cin >> num;
	cout << "Smallest number is: " << smallestDigit(num);
	return 0;

	return 0;
}
int smallestDigit(int num)
{
	int sml = num % 10;
	while (num > 0) {
		int digit = num % 10;
		if (sml > digit) {
			sml = digit;
		}
		num /= 10;
	}
	return sml;

}