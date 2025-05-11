//Nth Fibonacci//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the fibo number to get sequence ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " series is\n ";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << first << "  ";

        else if (i == 2)
            cout << second << " ";
        else {
            next = first + second; // Next term = sum of previous two
            cout << next << "  ";  // Print the new term
            first = second;        // Move first forward
            second = next;         // Move second forward
        }
    }


    return 0;
}