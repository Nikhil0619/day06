//Write a Program to Calculate the Length of the String Using Recursion

#include <iostream>
#include <cstring> // for strlen()
using namespace std;

bool isPalindrome(const char* str, int start, int end) {
    // Base case: empty string or single character
    if (start >= end) {
        return true;
    }

    // If characters don't match
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive case: check next pair
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, 100);

    int length = strlen(input);

    if (isPalindrome(input, 0, length - 1)) {
        cout << "\"" << input << "\" is a palindrome!" << endl;
    }
    else {
        cout << "\"" << input << "\" is NOT a palindrome." << endl;
    }

    return 0;
}