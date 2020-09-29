#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int count;
    cin >> count;

    int min = 1000000, max = -1000000;
    int input;
    while (count-- > 0)
    {
        cin >> input;
        if (min > input)
        {
            min = input;
        }

        if (max < input)
        {
            max = input;
        }
    }

    cout << min << " " << max;
    return 0;
}