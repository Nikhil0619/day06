//print diamond pattern.

#include <iostream>
using namespace std;

int main() {
    int n, space;

    cout <<"Enter number of rows (half of diamond)";
    cin >> n;

    // Top half of diamond
    for (int i = 1; i <= n; i++) {
        
        for (space = 1; space <= n - i; space++) { // Print spaces
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}