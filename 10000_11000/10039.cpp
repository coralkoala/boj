#include <iostream>
using namespace std;
int main()
{
    const int COUNT = 5;

    int sum = 0;
    int score = 0;

    int count = 0;
    while (count++ < COUNT)
    {
        cin >> score;
        if (score < 40)
        {
            score = 40;
        }

        sum += score;
    }

    cout << sum / COUNT << endl;
    return 0;
}