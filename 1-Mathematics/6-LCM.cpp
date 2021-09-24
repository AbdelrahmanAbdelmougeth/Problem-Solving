int minimum(int a, int b)
{
	return a < b ? a : b;
}

int maximum(int a, int b)
{
	return a > b ? a : b;
}

int LCM(int a, int b)
{
    int res = maximum(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            break;
        res++;
    }
    return res;
}

int LCM2(int a, int b) //less code but the same implementation
{
    int res = maximum(a, b);
    while (!(res % a == 0 && res % b == 0))
    {
        res++;
    }
    return res;
}

//optimized version of euclidean algorithm
int GCD(int a, int b)//O(log min(a,b))
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

/* a*b = GCD(a,b)*LCM(a,b) */
int LCM(int a, int b)//O(log min(a,b))
{
	return (a * b) / GCD(a, b);
}