#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int t;
    cin >> t;

    int a, b, result;
    while (t--)
    {
        cin >> a >> b;
        result = 1;

        while (b--)
        {
            result = (result * a) % 10;
        }

        if (result == 0)
        {
            result = 10;
        }

        cout << result << "\n";
    }

    return 0;
}