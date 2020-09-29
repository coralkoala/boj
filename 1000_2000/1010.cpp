#include <iostream>

using namespace std;
long Factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }

    long result = 1;
    while (number > 1)
    {
        result *= number;
        number--;
    }

    return result;
}

long Combination(int m, int n)
{
    int k = m - n > n ? n : m - n;
    long denominator = Factorial(k);
    long numerator = 1;

    int tryCount = k;
    while (tryCount-- > 0)
    {
        numerator *= m;
        m--;
    }

    return numerator / denominator;
}

int main()
{
    int count;
    cin >> count;

    while (count-- > 0)
    {
        int n, m;
        cin >> n >> m;

        cout << Combination(m, n) << endl;
    }

    return 0;
}