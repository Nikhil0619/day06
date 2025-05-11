//Write a Program to Check Whether a Number is an Armstrong Number or Not

#include <iostream>
#include <cmath> // Needed for pow() function
using namespace std;

int main() {
    int n, p, remainder, digits = 0;
        int result = 0;

    cout << "Enter a number ";
    cin >> n;

    p = n;

    // First, count how many digits the number has
    while (p != 0) {
        p = p / 10;
        digits++;
    }

    p = n; // Reset p to the original number

    // Calculate sum of each digit^(number of digits)
    while (p != 0)
    {
        remainder = p % 10;
        result += pow(remainder, digits); 
        p = p / 10;
    }

    if (result == n) {
        cout << "Yes! This is an Armstrong number!\n";
    }
    else {
        cout << "it's not an Armstrong number\n";
    }

    return 0;
}