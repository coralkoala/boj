#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    int number = n;
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }

    int result = 0;
    for (int i = n - (count * 9); i <= n; i++)
    {
        int num = i;
        int sum = i;

        for (int j = count - 1; j >= 0; j--)
        {
            int power = pow(10, j);
            int targetNumber = num / power;

            sum += targetNumber;
            num -= power * targetNumber;
        }

        if (sum == n)
        {
            result = i;
            break;
        }
    }

    cout << result;
    return 0;
}