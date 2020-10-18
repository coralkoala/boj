#include <cstring>
#include <iostream>
using namespace std;
struct Pair
{
    int zero;
    int one;
};

Pair memo[41];
int current;
    
Pair fibonacci(int n)
{
    if (n > current)
    {
        for (int i = current; i <= n; i++)
        {
            memo[i].zero = memo[i - 1].zero + memo[i - 2].zero;
            memo[i].one = memo[i - 1].one + memo[i - 2].one;
        }

        current = n;
    }

    return memo[n];
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    memset(memo, 0, sizeof(Pair) * 41);
    // 미리 6까지만 넣어두고 시작..
    memo[0].zero = 1, memo[0].one = 0;
    memo[1].zero = 0, memo[1].one = 1;
    memo[2].zero = 1, memo[2].one = 1;
    memo[3].zero = 1, memo[3].one = 2;
    memo[4].zero = 2, memo[4].one = 3;
    memo[5].zero = 3, memo[5].one = 5;
    memo[6].zero = 5, memo[6].one = 8;
    current = 6;

    int t;
    cin >> t;

    while (t--)
    {
        int input;
        cin >> input;

        auto result = fibonacci(input);
        cout << result.zero << ' ' << result.one << '\n';
    }

    return 0;
}