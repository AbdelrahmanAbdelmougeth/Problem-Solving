double termOfGP(int A, int B, int N)
{
    //Your code here
    if (N == 1)
        return static_cast<double>(A);
    if (N == 2)
        return static_cast<double>(B);

    double common_ratio = static_cast<double>(B) / static_cast<double>(A);
    double Nth_term;
    double r = common_ratio;
    for (int i = 3; i <= N; i++)
    {
        r *= common_ratio;
        Nth_term = A * r;
    }
    return Nth_term;
}