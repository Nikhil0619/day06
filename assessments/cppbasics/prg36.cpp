//Write a C++ Program to Print the Given String in Reverse Order Using Recursion

#include <iostream>
using namespace std;

int  reverseString(const char* str)
{
    if (*str == '\0') {  // Base case: end of string
        return 0;
    }
    reverseString(str + 1);  // Recursive call with next character
    cout << *str; // Print current character after recursion ends     
    return 0;
}

int main() {
    char a[100];

    cout << "Enter a string: ";
    cin.getline(a, 100);  // Read input with spaces

    cout << "Reversed string: ";
    reverseString(a);     // Call recursive function

    return 0;
}