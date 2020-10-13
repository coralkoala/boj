#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 123456;

    bool primeArray[MAX * 2 + 1];
    memset((void*)primeArray, 1, sizeof(bool) * (MAX * 2 + 1));
    primeArray[0] = primeArray[1] = false;

    for (int i = 2; i <= 2 * MAX; i++)
    {
        if (primeArray[i] == false)
        {
            continue;
        }

        for (int j = 2; j <= 2 * MAX; j++)
        {
            int targetNumber = i * j;
            if (targetNumber > 2 * MAX)
            {
                break;
            }

            primeArray[targetNumber] = false;
        }
    }
    
    int n, primeCount;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        primeCount = 0;
        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (primeArray[i] == true)
            {
                primeCount++;
            }
        }

        cout << primeCount << '\n';
    }

    return 0;
}