//Write a Program for Octal to Decimal Conversion

#include <iostream>
#include <cmath> // for pow() function
using namespace std;

int octalToDecimal(int octal) 
{
    int decimal = 0;
    int power = 0;

    while (octal != 0) {
        int digit = octal % 10; // Extract rightmost digit
        decimal += digit * pow(8,power); // Multiply by 8^power
        power++; // Increase power for next digit
        octal /= 10; // Remove rightmost digit
    }

    return decimal;
}

int main() {
    int octalNumber;

    cout << "Enter an octal number ";
    cin >> octalNumber;

    int decimalNumber = octalToDecimal(octalNumber);
    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}