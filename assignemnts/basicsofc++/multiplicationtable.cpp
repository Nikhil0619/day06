/*/Input a number n.Print its multiplication table up to 10.*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}