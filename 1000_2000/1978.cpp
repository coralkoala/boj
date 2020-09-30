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

    int n;
    cin >> n;

    int count = 0;
    while (n-- > 0)
    {
        int number;
        cin >> number;

        if (isPrime(number))
        {
            count++;
        }
    }

    cout << count;
    return 0;
}