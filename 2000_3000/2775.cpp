#include <iostream>
using namespace std;
int calculate(int k, int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (k == 0)
    {
        return n;
    }

    return calculate(k, n - 1) + calculate(k - 1, n);
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> k >> n;
        
        cout << calculate(k, n) << '\n';
    }

    return 0;
}