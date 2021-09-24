bool is_prime(int n)//O(n)
{
	if (n == 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

/* the pair(x,y) such that x*y = n 
if x<=y then x*x <= n  so x <= sqrt(n)
30:(1,30) ,(2,15), (3,10),(5,6)
25:(1,25), (5,5)
65:(1,65),(5,13)*/
bool is_prime(int n) //O(sqrt(n))
{
	if (n == 1)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;

}

//even further optimized solution
bool is_prime(int n)
{
	if (n == 1)
		return false;
	if (n == 2 || n == 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i=i+6)
		if (n % i == 0 || n%(i+2) == 0)
			return false;
	return true;
}

//Naive implementation O(n^2 lon(n))
void find_prime_factors(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (is_prime(i))
		{
			int x = i;
			while (n % x == 0)
			{
				cout << i << " ";
				x = x * i;
			}
		}
	}
}

//efficient implementation 
void find_prime_factors(int n)
{
	if (n <= 1) return;
	for (int i = 2; i * i < n; i++)
	{
		while (n % i == 0)
		{
			cout << i << " ";
			n = n / i;
		}
	}
	if (n > 1)
		print n;
}

//even more efficient solution  theta(1/6*sqrt(n))
void find_prime_factors(int n)
{
	if (n <= 1) return;

	while (n % 2 == 0)
	{
		cout < 2 << " ";
	}

	while (n % 3 == 0)
	{
		cout < 3 << " ";
	}

	for (int i = 5; i * i < n; i=i+6)
	{
		while (n % i == 0)
		{
			cout << i << " ";
			n = n / i;
		}
		while(n%(i+2) == 0)
		{
			cout << i+2 << " ";
			n = n / (i+2);
		}
	}
	if (n > 3)
		cout << n;
}