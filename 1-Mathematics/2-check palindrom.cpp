bool check_palindrom(int number)
{
    int reverse = 0;
    int temp = number;
    int remainder = 0;
    while (temp > 0)
    {
        remainder = temp % 10;
        temp /= 10;
        reverse = reverse * 10 + remainder;
    }
    return(reverse == number);
}