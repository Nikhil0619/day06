/*Q1.
Write the logic to print star pattern or rectangle star pattern.

Input Format  : First line contains N of type integer.

Output Format : Print the rectangle star pattern.

Constrains:
2<=N<=10

Sample Input:
5

Sample Output:
*****
*****
*****
*****
*****
*/

void display() {

	int i, j;
	int n = 5;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			cout << "*";
		cout << endl;
	}
}