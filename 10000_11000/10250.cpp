#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int t;
    cin >> t;

    int h, w, n;
    int floor, roomNumber;
    while (t--)
    {
        cin >> h >> w >> n;

        int quotient = n / h;
        int remainder = n % h;

        if (remainder == 0)
        {
            quotient -= 1;
            remainder = h;
        }

        cout << remainder * 100 + quotient + 1 << "\n";
    }

    return 0;
}