//Write a Program to Print the Rotated Hourglass Pattern

#include <iostream>
using namespace std;

int main() {
    int n;

    cout <<"Enter size half-width of rotated hourglass ";
    cin >> n;

    // Top half of the pattern
    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= i; j++) {   // Left stars
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}