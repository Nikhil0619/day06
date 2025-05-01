#include <iostream>
using namespace std;

int main() {
    int temp;

    cout << "Enter the temperature ";
    cin >> temp;

    // Using if-else ladder to determine the category
    if (temp > 35) {
        cout << "Its Hot!" << endl;
    }
    else if (temperature >= 20 && temperature <= 35) {
        cout << "its Warm" << endl;
    }
    else if (temperature < 20) {
        cout << "its Cold" << endl;
    }

    return 0;
}