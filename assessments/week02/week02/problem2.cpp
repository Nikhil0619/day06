#include <iostream>
using namespace std;

void countDigitFrequency(long long num) {
    int digitCount[10] = { 0 }; // Array for frequency of each digit.
    int reminder;
    if (num < 0)
        num = -1 * num; // Using a negative integer.
    cout << "Frequency of each digit :\n";
    while (num) {
        reminder = num % 10; // Getting reminder.
        cout << "Digit " << reminder << " occurs " << digitCount[reminder] << "\n";
    }
    return;
}

int main() {
    long long n;
    cout << "Enter Number for counting: ";
    cin >> n;
    countDigitFrequency(n); // Counting frequency.
}