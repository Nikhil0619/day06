//Write a Program for Decimal to Binary Conversion

#include <iostream>
using namespace std;

int main() {
    int decimal;
    int binary = 0;
    int place = 1; // Represents current digit position (1, 10, 100, etc.)

    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Special case for 0
    if (decimal == 0) {
        cout << "Binary equivalent= 0" << endl;
        return 0;
    }

    // Conversion process
    while (decimal > 0) {
        binary += (decimal % 2) * place; // Add current bit at correct position
        decimal /= 2;                   // Move to next bit
        place *= 10;                    // Move to next digit position
    }

    cout << "Binary equivalent: " << binary << endl;
    return 0;
}