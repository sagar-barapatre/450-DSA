string factorial(long long n)
{
    if (n > MAX)
    {
        cout << " Integer Overflow"
             << endl;
        return "";
    }

    long long counter;
    long double sum = 0;

    // Base case
    if (n == 0)
        return "1";
    for (counter = 1; counter <= n; counter++)
    {
        sum = sum + log(counter);
    }
    string result = to_string(round(exp(sum)));

    return result;
}