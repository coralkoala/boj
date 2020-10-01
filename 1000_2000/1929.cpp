#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 1000000;

    bool prime[MAX + 1] = {true};
    fill_n(prime, MAX + 1, true);
    prime[1] = false;

    int m, n;
    cin >> m >> n;

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == false)
        {
            continue;
        }

        prime[i] = true;

        for (int j = 2; j <= n; j++)
        {
            int targetNumber = i * j;
            if (targetNumber > n)
            {
                break;
            }

            prime[targetNumber] = false;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (prime[i] == true)
        {
            cout << i << "\n";
        }
    }

    return 0;
}