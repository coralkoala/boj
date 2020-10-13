#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
struct SimpleTuple
{
    int value1;
    int value2;
};

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 10000;

    bool primeArray[MAX + 1];
    memset(primeArray, 1, sizeof(bool) * (MAX + 1));
    primeArray[0] = primeArray[1] = false;

    for (int i = 2; i <= MAX; i++)
    {
        if (primeArray[i] == false)
        {
            continue;
        }

        for (int j = 2; j <= MAX; j++)
        {
            int targetNumber = i * j;
            if (targetNumber > MAX)
            {
                break;
            }

            primeArray[targetNumber] = false;
        }
    }

    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;

        vector<SimpleTuple> results;
        for (int i = 2; i <= n / 2; i++)
        {
            if (primeArray[i] == false)
            {
                continue;
            }

            int j = n - i;
            if (primeArray[j] == true)
            {
                SimpleTuple simpleTuple;
                simpleTuple.value1 = i;
                simpleTuple.value2 = j;

                results.push_back(simpleTuple);
            }
        }

        if (results.size() == 1)
        {
            auto result = results.front();
            cout << result.value1 << ' ' << result.value2 << '\n';
        }
        else
        {
            int minGap = n;
            vector<SimpleTuple>::iterator answer;

            for (auto iter = results.begin(); iter != results.end(); iter++)
            {
                int gap = iter->value2 - iter->value1;
                if (minGap > gap)
                {
                    minGap = gap;
                    answer = iter;
                }
            }

            cout << answer->value1 << ' ' << answer->value2 << '\n';
        }
    }

    return 0;
}