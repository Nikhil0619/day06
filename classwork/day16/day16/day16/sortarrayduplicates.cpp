# include<iostream>

using namespace std;

#define MAX 100

int main()

{
	int a[MAX];

	int n = sizeof(a) / sizeof(a[0]);

	cout << "Enter the size of the array\n";
	cin >> n;

	cout << "Enter the elements of the array\n";

	for (int i = 0;i < n;i++)

		cin >> a[i];


	//removing th duplicate elements in array//

	for (int i = 0;i < n;i++)

	{
		for (int j = i + 1;j < n;)
		{
			if (a[i] == a[j])
			{//shifting elements to the left side
				for (int k = 1;k < n - 1;k++)//n-1 else beyond scope
				{
					a[k] = a[k + 1];
				}
				n--;
			}//reduce the size of dup item found after shifting
			else
				j++;//no dup item present so increment j
		}
	}


	cout << "array without duplicates is" << endl;

	for (int i = 0;i < n;i++)
		cout << a[i] << endl;
	return 0;
}
