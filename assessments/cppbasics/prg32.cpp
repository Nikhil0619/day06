//Write a Program to print an Inverted Pyramid

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout <<"Enter number of rows for the inverted pyramid ";
    cin >> rows;

    for (int i = rows; i >= 1; i--)
    {
        for (int space = 0; space < rows - i; space++) {
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