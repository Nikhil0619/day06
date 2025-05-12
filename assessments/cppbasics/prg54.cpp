//Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include <iostream>
using namespace std;

int main() {
    float fahrenheit,celsius;

    cout << "Enter temperature in Fahrenheit";
    cin >> fahrenheit;

    // Conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius is"<< celsius << endl;

    return 0;
}