//Take a character input and check if it is between 'A' and 'Z'

#include <iostream>
using namespace std;

int main() 
{
    
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is between 'A' and 'Z'
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is between A and Z" << endl;
    }
    else {
        cout << ch << " is NOT between A and Z" << endl;
    }

    return 0;
}