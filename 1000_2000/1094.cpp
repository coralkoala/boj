#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int x;
    cin >> x;

    int sticks = 0;
    while (x > 0)
    {
        sticks += x % 2;
        x /= 2;
    }

    cout << sticks;
    return 0;
}