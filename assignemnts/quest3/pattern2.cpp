/*Q3.
 Write the logic to print inverted right triangle star pattern.

Input Format  : First line contains N of type integer.

Output Format : Print the inverted right triangle star pattern.

Constrains:
2<=N<=10
Sample Input:
5

Sample Output:
*****
****
***
**
*

*/


void display() {

	int i, j;
	int n = 5;

	for (i = 0; i < 5; i++)
	{
		for (j = 5;j > i;j--)
			cout << "*";

		cout << endl;

	}
}