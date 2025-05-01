#include <iostream>
using namespace std;

int main() {
    int num, Counteven = 0, Countodd = 0;
    cout << "Enter a number ";
    cin >> num;

    while (num > 0)
    {
        int digit = num % 10; // Get the last digit
        if (digit % 2 == 0) {
            Counteven++;
        }
        else {
            Countodd++;
        }
        num /= 10; // Remove the last digit
    }

    cout << "Even digits: " << Counteven << endl;
    cout << "Odd digits: " << Countodd << endl;

    return 0;
}