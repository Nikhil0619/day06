//Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator

#include <iostream>
using namespace std;

bool isEqual(int a, int b) 
{
    // XOR returns 0 if numbers are equal
    return !(a ^ b);
}

int main() {
    int x, y;
    cout << "Enter two numbers";
    cin >> x >> y;

    if (isEqual(x, y)) {
        cout << "Numbers are equal" << endl;
    }
    else {
        cout << "Numbers are not equal" << endl;
    }

    return 0;
}