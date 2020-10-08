#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, f;
    cin >> n >> f;

    int newN = (n / 100) * 100;
    while (true)
    {
        if (newN % f == 0)
        {
            break;
        }

        newN++;
    }

    int result = newN % 100;
    if (result < 10)
    {
        cout << "0";
    }

    cout << result;
    return 0;
}