long long factorial(int N) {
    // Your code here
    long long result = 1;

    for (int i = N; i > 1; i--)
        result *= i;

    return result;
}