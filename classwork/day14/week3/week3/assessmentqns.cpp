#include <iostream>
using namespace std;
#include <string>
#define MAX 1024

int findSubStrSum(char[]);
int main() {
	char myString[MAX];
	cin.getline(myString, MAX);
	int sum = findSubStrSum(myString);
	cout << "Sum = " << sum;
	return 0;
}

int findSubStrSum(char str[]) {
	int areCount = -1, iCount = -1, sum, i = 0;
	while (str[i] != '\0') {
		if (str[i] == 'a') {
			if (str[i + 1] == 'r' && str[i + 2] == 'e') {
				areCount = i;
			}
		}
		if (str[i] == 'i') {
			if (iCount == -1)
				iCount = i;
		}
		i++;
	}

	sum = areCount + iCount;
	return sum;
}