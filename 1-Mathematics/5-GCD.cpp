int minimum(int a, int b)
{
	return a < b ? a : b;
}

/*If you draw a rectangle of a & b so the greatest tile to fill
the rectangle with is the square of gcd
(room of 6*4  so the greatest tile is 2*2 and of course we can 
fill the rectangle with 1)*/
int GCD(int a, int b) //O(min(a,b))
{
	int greatest_common_divisor = minimum(a, b);
	while (greatest_common_divisor > 0)
	{
		if (a % greatest_common_divisor == 0 && b % greatest_common_divisor == 0)
		{
			break;
		}
		greatest_common_divisor--;
	}
	return greatest_common_divisor;
}

//Euclidean Algorithm
/*let b<a so GCD(a,b) = GCD(a-b , b)  why??
let g = GCD(a,b)  & a = gy, b = gy(where x,y are integers)
so GCD(x,y) = 1
(a-b) = g(x-y) and if there is gcd bigger than g then that contradicts 
the GCD(x,y) = 1 and sure there is a common factor in there*/
int GCD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

//optimized version of euclidean algorithm
int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
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