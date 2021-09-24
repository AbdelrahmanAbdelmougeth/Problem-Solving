int count_digits(int number)
{
    int digit_counter = 0;
    while (number > 0)
    {
        number /= 10;
        digit_counter++;
    }
    return digit_counter;
}

int count_digits(int number)
{
    if (number == 0)
        return 0;

    return 1 + count_digits(number / 10);
}

int count_digits(int number)
{
    return floor(log10(number) + 1);
}