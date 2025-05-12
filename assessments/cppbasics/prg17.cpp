// Program to check whether a number is palindrome or not

#include <iostream>
using namespace std;

int main() 
{
    int num, reversedNum= 0, originalNum, remainder;

    cout << "Enter a number";
    cin >> num;

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10;                      // Remove the last digit
    }

    // Check if the reversed number matches the original
    if (reversedNum==originalNum)
    {
        cout << "It is a palindrome" << endl;
    }
    else {
        cout << "Number is Not a palindrome" << endl;
    }

    return 0;
}



































