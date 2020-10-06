#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 100;
    int card[MAX] = {0};

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }

    int answer = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = card[i] + card[j] + card[k];
                if (sum > m)
                {
                    continue;
                }

                if (m - answer > m - sum)
                {
                    answer = sum;
                }
            }
        }
    }

    cout << answer;
    return 0;
}