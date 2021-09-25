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

int exactly3Divisors(int N) //O(N^1/2 * N^1/4)  //1 <= N <= 109
{
    int counter = 1;

    if (N <= 3)
        return 0;

    for (int i = 3; i * i <= N; i++)
    {
        if (is_prime(i) && (i * i) <= N)
        {
            counter++;
        }
    }
    return counter;
}


//there is more efficient solution but it's not working on big constrains using seive algorithm
int exactly3Divisors2(int N)
{
    //Your code here
    //the only numbers that have only 3 divisors are the square 
    //of prime numbers

    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    int counter = 0;

    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            counter++;
            for (int j = i * i; j <= N; j = j + i)
                isPrime[j] = false;
        }
    }
    return counter;
}