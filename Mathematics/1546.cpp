#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int MAX = 1000;

    int count;
    cin >> count;

    int scores[MAX];
    int highestScore = 0;
    float sum = 0.0f;

    for (int i = 0; i < count; i++)
    {
        cin >> scores[i];

        sum += scores[i];
        if (scores[i] > highestScore)
        {
            highestScore = scores[i];
        }
    }

    cout.precision(3);
    cout << sum / highestScore * 100 / count << endl;
    
    return 0;
}