#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    // Calculate the sum of digits raised to the power of 'digits'
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number!" << endl;
    }
    else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}