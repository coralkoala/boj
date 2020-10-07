#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int INPUT_COUNT = 7;
    const int MAX = 100;

    int sum = 0;
    int min = MAX;

    int input;
    for (int i = 0; i < INPUT_COUNT; i++)
    {
        cin >> input;
        if (input % 2 == 0)
        {
            continue;
        }

        sum += input;
        if (min > input)
        {
            min = input;
        }
    }

    if (sum <= 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << "\n" << min;
    }
    
    return 0;
}