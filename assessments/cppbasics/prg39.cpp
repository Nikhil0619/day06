//Write a Program to Calculate the Factorial of a Number Using Recursion

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
double factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
    }
    else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}