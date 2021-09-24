//
void print_all_divisors(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i << " ";
	}
}

void print_all_divisors(int n) //theta(sqrt(n)) not in sorted order
{
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			if (n / i != i)
				cout << n / i;
		}
	}
}

void print_all_divisors(int n) //theta(sqrt(n)) increasing order
{
	int i;
	for (i = 1; i * i <= n; i++)
		if (n % i == 0)
			cout << i << " ";

	for (; i >= 1; i--)
		if (n % i == 0)
			cout << n/i << " ";
}