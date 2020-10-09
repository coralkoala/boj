#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int NUMBER_COUNT = 8001;
    int countArray[NUMBER_COUNT] = {0};
    vector<int> numbers;

    int n;
    cin >> n;

    double sum = 0;
    int min = 4000, max = -4000;
    int maxCount = 0;

    int input, count;
    for (int i = 0; i < n; i++)
    {
        cin >> input;

        sum += input;
        numbers.push_back(input);
        
        if (min > input)
        {
            min = input;
        }

        if (max < input)
        {
            max = input;
        }

        count = ++countArray[input + 4000];
        if (maxCount < count)
        {
            maxCount = count;
        }
    }

    sort(numbers.begin(), numbers.end());

    vector<int> maxCountNumbers;
    for (int i = 0; i < NUMBER_COUNT; i++)
    {
        if (countArray[i] != maxCount)
        {
            continue;
        }

        maxCountNumbers.push_back(i - 4000);
    }

    cout << round(sum / n) << '\n';
    cout << numbers[n / 2] << '\n';

    if (maxCountNumbers.size() > 1)
    {
        cout << maxCountNumbers[1] << '\n';
    }
    else
    {
        cout << maxCountNumbers[0] << '\n';
    }
    
    cout << max - min;

    return 0;
}