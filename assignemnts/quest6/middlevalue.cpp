/*1. Find the Middle Value Among Three Numbers
Problem :
Write a function that takes three integers and returns the middle one(not maximum, not minimum).
*/

#include <iostream>

using namespace std;

int middleValue(int a, int b, int c) {
    if ((a > b && a < c) || (a < b && a > c))
        return a;
    else if ((b > a && b < c) || (b < a && b > c))
        return b;
    else
        return c;
}

int main() {
    int a = 10, b = 5, c = 8;
    cout << "Middle value is " << middleValue(a, b, c) << endl;
    return 0;
}