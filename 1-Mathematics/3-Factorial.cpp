unsigned int factorial(unsigned int n)
{
    unsigned int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

//the max is n = 33