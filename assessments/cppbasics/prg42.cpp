//Write a Program to Swap the Values of Two Variables Without Using any Extra Variable

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout<< "Enter two numbers ";
    cin>> a >> b;


    // Swap using arithmetic operations
    a = a + b;  // a = 15 (5 + 10)
    b = a - b;  // b = 5 (15 - 10)
    a = a - b;  // a = 10 (15 - 5)

    cout << "After swap: a =" << a << "b = " << b << endl;

    return 0;
}