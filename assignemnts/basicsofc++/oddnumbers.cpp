#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the value of N ";
    cin >> N;

    cout << "The Odd numbers are:" << endl;
    for (int i = 1; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}