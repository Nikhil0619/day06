//Write a Program to Print a Simple Pyramid Pattern

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout <<"Enter number of rows for the pyramid: ";
    cin >> rows;

   
    for (int i = 1; i <= rows; i++) {  // Loop for each row

        
        for (int space = 1; space <= rows - i; space++) { // Print spaces before stars
            cout << " ";  // Print a space
        }

        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";  // Print a star
        }

        cout << endl;  // Move to the next line
    }

    return 0;
}