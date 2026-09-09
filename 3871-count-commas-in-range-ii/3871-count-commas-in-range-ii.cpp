class Solution
{
public:
    long long countCommas(long long n)
    {
        long long count = 0;

        for (long long divisor = 1000; divisor <= n; divisor *= 1000)
        {
            count += n - divisor + 1;

            if (divisor > n / 1000)
                break;
        }

        return count;
    }
};