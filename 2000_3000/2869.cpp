#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, v;
    cin >> a >> b >> v;

    int day = (v - a) / (a - b) + 1;
    if ((v - a) % (a - b) != 0)
    {
        day++;
    }

    cout << day;
    return 0;
}