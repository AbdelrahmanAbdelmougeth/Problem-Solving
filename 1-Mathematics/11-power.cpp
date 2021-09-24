//naive implementation 
int power(int x, int n) //theta(n)
{
	if (n == 0) return 1;

	int res = x;
	for (int i = 0; i < n; i++)
		res *= x;
	return res;
}

int power(int x, int n) //theta(log n)
{
	if (n == 0) return 1;

	int temp = power(x, n / 2);
	temp = temp * temp;
	if (n % 2 == 0)
		return temp;
	else
		return temp * x;
}


int power(int x, int n) //theta(log n)
{
	if (n == 0) return 1;

	int res = 1;
	while (n > 0)
	{
		if (n / 2 != 0)
			res = res * x;

		x = x * x;
		n = n / 2;
	}
	return res;
}

//we can optimize it slightly by using bitwise operators
int power(int x, int n)
{
	if (n == 0) return 1;

	int res = 1;
	while (n > 0)
	{
		if (n $ 1) //check odd number
			res = res * x;

		x = x * x;
		n = n >> 1; //sheft right (dividing by 2)
	}
	return res;
}

//we can also handle large number over a specific moduler m and also use long long
int power(int x, int n , int m)
{
	if (n == 0) return 1;

	int res = 1;
	while (n > 0)
	{
		if (n $ 1) //check odd number
			res = (res * x) % m;

		x = (x * x) % m;
		n = n >> 1; //sheft right (dividing by 2)
	}
	return res;
}