#include <iostream>
#include <climits>
using namespace std;

int calculateCount(int n, int current, int targetWeight, int otherWeight)
{
    int count = n - (current * targetWeight);
    if (count % otherWeight != 0)
    {
        return INT_MAX;
    }
    
    return current + (count / otherWeight);
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    int min = INT_MAX;

    int threeMax = n / 3;
    while (threeMax >= 0)
    {
        int wholeCount = calculateCount(n, threeMax--, 3, 5);
        if (wholeCount < min)
        {
            min = wholeCount;
        }
    }

    int fiveMax = n / 5;
    while (fiveMax >= 0)
    {
        int wholeCount = calculateCount(n, fiveMax--, 3, 5);
        if (wholeCount < min)
        {
            min = wholeCount;
        }
    }

    if (min == INT_MAX)
    {
        min = -1;
    }

    cout << min;
    return 0;
}