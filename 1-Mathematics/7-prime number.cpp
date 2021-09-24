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