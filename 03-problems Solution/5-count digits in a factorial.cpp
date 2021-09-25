
/*A naive solution would be to calculate the n! first and then calculate the number of digits present in it. 
However as the value for n! can be very large, it would become cumbersome to store them in a variable 
(Unless you’re working in python!) . 
A better solution would be to use the useful property of logarithms to calculate the required answer. */

/*
We know,
log(a*b) = log(a) + log(b)

Therefore
log( n! ) = log(1*2*3....... * n) 
          = log(1) + log(2) + ........ +log(n)

Now, observe that the floor value of log base 
10 increased by 1, of any number, gives the
number of digits present in that number.

Hence, output would be : floor(log(n!)) + 1.
*/
//this solution can't handle cases where n > 10^6
int findDigits(int n)
{
    // factorial exists only for n>=0
    if (n < 0)
        return 0;

    // base case
    if (n <= 1)
        return 1;

    // else iterate through n and calculate the
    // value
    double digits = 0;
    for (int i = 2; i <= n; i++)
        digits += log10(i);

    return floor(digits) + 1;
}

//Optimized solution
//We can use Kamenetsky’s formula to find our answer ! 
/*
It approximates the number of digits in a factorial by :
f(x) =    log10( ((n/e)^n) * sqrt(2*pi*n))

Thus, we can pretty easily use the property of logarithms to,
f(x) = n* log10(( n/ e)) + log10(2*pi*n)/2 
*/
long long findDigits(int n)
{
    // factorial of -ve number
    // doesn't exists
    if (n < 0)
        return 0;

    // base case
    if (n <= 1)
        return 1;

    // Use Kamenetsky formula to calculate
    // the number of digits
    double x = ((n * log10(n / M_E) +
        log10(2 * M_PI * n) /
        2.0));

    return floor(x) + 1;
}
