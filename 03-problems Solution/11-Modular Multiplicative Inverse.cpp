/*
a x ≡ 1 % m
The value of x should be in {0, 1, 2, … m-1}, i.e., in the ring of integer modulo m.
The multiplicative inverse of “a modulo m” exists if and only if a and m are relatively prime (i.e., if 
gcd(a, m) = 1).
A Naive method is to try all numbers from 1 to m. For every number x, check if (a*x)%m is 1
*/

int minimum(int a, int b)
{
	return a < b ? a : b;
}

//Iterative version
int GCD(int a, int b)
{
	int min = minimum(a, b);
	int temp;
	if (a < b)
	{
		a = b;
		b = min;
	}
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;

}

int modInverse(int a, int m)
{
	//Your code here
	if (GCD(a, m) == 1)
	{
		for (int i = 0; i < m; i++)
		{
			if (((a * i) % m) == 1)
				return i;
		}
	}
	return -1;
}