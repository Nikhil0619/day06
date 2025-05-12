//Write a program in C++ to find the area and circumference of a circle.

#include <iostream>
using namespace std;

int main() {
    float radius, area, circumf;
    float PI = 3.14;  

    cout << "Enter radius of circle ";
    cin >> radius;

    // Calculate area and circumference
    area = PI * radius * radius;
    circumf = 2 * PI * radius;

    
    cout << "\nArea = " << area;
    cout << "\nCircumference = " << circumf;

    return 0;
}