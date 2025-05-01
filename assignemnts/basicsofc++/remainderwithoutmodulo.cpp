#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    int remainder;
    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

     remainder = a - (a / b) * b;

    
    cout << "The remainder when " << a << " is divided by " << b << " is: " 
        << remainder << endl;

    return 0;
}