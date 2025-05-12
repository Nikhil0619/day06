
//Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers";
    cin >> a >> b;

    // Finding max and min without comparison
    int max = (a + b + abs(a - b)) / 2;
    int min = (a + b - abs(a - b)) / 2;

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
