int trail_zeros_in_factorial(int n) //this solution will cause an overflow O(n)
{
    unsigned int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
   
    int number_of_zeros = 0;
    while (fact % 10 == 0)
    {
        number_of_zeros++;
        fact = / 10;
    }
    return number_of_zeros;
}

int trail_zeros_in_factorial(int n)
{
    int number_of_zeros = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        number_of_zeros += n / i;
    }
    return number_of_zeros;
}
