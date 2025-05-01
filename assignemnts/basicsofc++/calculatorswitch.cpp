/* Input two numbers and an operator (+, -, *, / ).
Use switch to perform the operation.*/

#include <iostream>
using namespace std;

int main() {
    int  a, b;
    char op;
    cout << "Enter  first number ";
    cin >> a;
    cout << "Enter  second number";
    cin >> b;
    cout << "Enter an operator (+, -, *, /)";
    cin >> op;

    // Using switch to perform the operation
    switch (op) {
    case '+':
        cout << "Result: " << (a + b) << endl;
        break;
    case '-':
        cout << "Result: " << (a - b) << endl;
        break;
    case '*':
        cout << "Result: " << (a * b) << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << (a / b) << endl;
        }
        else {
            cout << "Division by zero is not possible!" << endl;
        }
        break;
    default:
        cout << "Invalid operator Chosen!" << endl;
    }

    return 0;
}
