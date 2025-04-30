// fibonacci using recursive functions

int fib(int x)
{

    if (x <= 1)
        return x;

    else
        return fib(x - 1) + fib(x - 2);
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "fibonacci series of " << n << " is: " << fib(n) << endl;
	return 0;
}