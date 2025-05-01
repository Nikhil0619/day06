#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Check if the numbers are equal using XOR
    if ((a ^ b) == 0) {
        cout << a << " and " << b << " are equal." << endl;
    }
    else {
        cout << a << " and " << b << " are NOT equal." << endl;
    }

    return 0;
}