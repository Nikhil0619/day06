#include<iostream>
using namespace std;

int main()

{
	int charge;

	cout << "whats the charge of your phone?" << endl;
	cin >> charge;



	if (charge == 0)
		cout << "plug the phone!" << endl;

	if (charge != 0)
		cout << " phone seems ok" << endl;
	return 0;

}