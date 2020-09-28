#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX_STUDENT = 1000;

    int count;
    cin >> count;

    int number;
    int scores[MAX_STUDENT] = {0,};

    while (count-- > 0)
    {
        cin >> number;

        double sum = 0;
        for (int i = 0; i < number; i++)
        {
            cin >> scores[i];
            sum += scores[i];
        }

        int students = 0;
        double average = sum / number;

        for (int i = 0; i < number; i++)
        {
            if (scores[i] > average)
            {
                students++;
            }
        }

        cout << fixed;
        cout.precision(3);
        cout << 100 * students / (double)number << "%\n";
    }

    return 0;
}