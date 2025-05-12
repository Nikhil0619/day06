//Write a Program for Decimal to Octal Conversion

#include <iostream>
using namespace std;

int main() {
    int decimal;
    long octal = 0;
    int place = 1;  // Represents current digit position (1, 10, 100, etc.)

    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Special case for 0
    if (decimal == 0) {
        cout << "Octal equivalent: 0" << endl;
        return 0;
    }

    // Conversion process
    while (decimal > 0) {
        octal += (decimal % 8) * place;  // Add current octal digit
        decimal /= 8;                   // Move to next digit
        place *= 10;                    // Move to next position
    }

    cout << "Octal equivalent: " << octal << endl;
    return 0;
}