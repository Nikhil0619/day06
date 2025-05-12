//Write a program in C++ to check the upper and lower limits of integer.

#include <iostream>
#include <climits> // Contains integer limits
using namespace std;

int main() {
    cout << "Integer Limits are as follows\n";

    // Signed integers
    cout << "\nSigned Integers:" << endl;
    cout << "char: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "short: " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "int: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "long: " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MIN << " to " << LLONG_MAX << endl;

    // Unsigned integers
    cout << "\nUnsigned Integers:" << endl;
    cout << "unsigned char: 0 to " << UCHAR_MAX << endl;
    cout << "unsigned short: 0 to " << USHRT_MAX << endl;
    cout << "unsigned int: 0 to " << UINT_MAX << endl;
    cout << "unsigned long: 0 to " << ULONG_MAX << endl;
    cout << "unsigned long long: 0 to " << ULLONG_MAX << endl;

    return 0;
}