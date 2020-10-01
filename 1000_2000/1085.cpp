#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int minLength = 1000;
    if (h - y < minLength)
    {
        minLength = h - y;
    }

    if (y < minLength)
    {
        minLength = y;
    }

    if (w - x < minLength)
    {
        minLength = w - x;
    }

    if (x < minLength)
    {
        minLength = x;
    }

    cout << minLength;
    return 0;
}