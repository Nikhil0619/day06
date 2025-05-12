//Write a program in C++ to check whether the primitive values crossing the limits or not.

#include <iostream>
#include <climits> // For integer limit constants
using namespace std;

int main() {
    // 1. Demonstrate integer overflow
    int maxInt = INT_MAX;
    cout << "Maximum int: " << maxInt << endl;
    cout << "Adding 1 to maximum int: " << maxInt + 1 << " (Overflow!)" << endl << endl;

    // 2. Demonstrate integer underflow
    int minInt = INT_MIN;
    cout << "Minimum int: " << minInt << endl;
    cout << "Subtracting 1 from minimum int: " << minInt - 1 << " (Underflow!)" << endl << endl;

    // 3. Demonstrate unsigned int wrap-around
    unsigned int maxUInt = UINT_MAX;
    cout << "Maximum unsigned int: " << maxUInt << endl;
    cout << "Adding 1 to maximum unsigned int: " << maxUInt + 1 << " (Wrapped around to 0!)" << endl << endl;

    // 4. Demonstrate char overflow
    char maxChar = CHAR_MAX;
    cout << "Maximum char: " << (int)maxChar << endl;
    cout << "Adding 1 to maximum char: " << (int)(maxChar + 1) << " (Overflow!)" << endl;

    return 0;
}