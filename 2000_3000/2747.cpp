#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    if (n < 2)
    {
        cout << n;
    }
    else
    {
        int tryCount = 1;
        int prev = 0;
        int current = 1;
        int result = 0;

        while (tryCount < n)
        {
            result = prev + current;

            prev = current;
            current = result;

            tryCount++;
        }

        cout << result;
    }

    return 0;
}