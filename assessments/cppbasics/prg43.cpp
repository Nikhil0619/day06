//Write a Program to Print the Maximum Value of an Unsigned int Using One's Complement (~) Operator

#include <iostream>
using namespace std;

int main() {
    unsigned int max_val = ~0;  // Bitwise NOT of 0

    cout << "Maximum value of unsigned int " << max_val << endl;

    return 0;
}