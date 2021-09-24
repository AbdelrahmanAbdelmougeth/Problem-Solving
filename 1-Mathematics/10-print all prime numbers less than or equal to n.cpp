bool is_prime(int n)
{
	if (n == 1)
		return false;
	if (n == 2 || n == 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

void print_all_primes_less_or_equal_to_n(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (is_prime(i))
			cout << i << " ";
	}
}

//efficient algorithm is seive algorithm
void print_all_primes_less_or_equal_to_n_sieve(int n)
{
	vector<bool> isPrime(n + 1, true);

	for (int i = 2; i*i <= n; i++)
	{
		if (isPrime[i])
		{
			for (int j = 2 * i; j <= n; j = j + i)
				isPrime[j] = false;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
			cout << i << " ";
	}
}

//even shorter implementation and optimized
//we can optimize the implementation by replacing j = 2*i with j = i*i
//because it is already has a smaller divisor and no point 
//to check it again
//to make it clear let's cosider i=2
//j=i*i=4 and we will go to 6 & 8 & 10 etc
//let's consider i=3 so j=i*i=9 so we don't have to check 6 again 
//and will reduce the time
void print_all_primes_less_or_equal_to_n_sieve(int n)
{
	vector<bool> isPrime(n + 1, true);

	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= n; j = j + i)
				isPrime[j] = false;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
			cout << i << " ";
	}
}

//the shorter implementation 
//now we can remove the second loop and print the number in the same loop
//because we start from j=i*i
void print_all_primes_less_or_equal_to_n_sieve(int n) //O(n log log n) the proof is long
{
	vector<bool> isPrime(n + 1, true);

	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
		{
			cout << i << " ";
			for (int j = 2 * i; j <= n; j = j + i)
				isPrime[j] = false;
		}
	}
}