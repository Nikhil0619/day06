//Write a Program to Print the Hourglass Pattern

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout <<"Enter number of rows (half of hourglass)";
    cin >> rows;

    // Top half (decreasing stars)
    for (int i = rows; i >= 1; i--) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half (increasing stars)
    for (int i = 2; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}