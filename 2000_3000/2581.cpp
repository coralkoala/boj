#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number == 1)
    {
        return false;
    }
    else if (number == 2)
    {
        return true;
    }
    else if (number % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3; i < number; i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int m, n;
    cin >> m >> n;

    int sum = 0; 
    int min = n;
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i) == false)
        {
            continue;
        }

        sum += i;
        if (min > i)
        {
            min = i;
        }
    }

    if (sum == 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << "\n" << min;
    }

    return 0;
}