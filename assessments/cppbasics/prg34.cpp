//Write a Program to Print Floyd's Triangle

#include <iostream>
using namespace std;

int main() {
    int rows, number = 1;

    cout <<"Enter number of rows for Floyd's Triangle";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}