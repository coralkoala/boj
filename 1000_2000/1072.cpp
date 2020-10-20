#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    long long x, y;
    cin >> x >> y;

    int z = 100 * y / x;
    if (z >= 99)
    {
        cout << -1;
        return 0;
    }

    long long low = 0, high = 100000000000;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long newZ = (100 * (y + mid)) / (x + mid);

        if (z >= newZ)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << low;
    return 0;
}