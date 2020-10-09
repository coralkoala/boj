#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 10000;
    int numbers[MAX + 1] = {0};
    
    int n;
    cin >> n;

    // using counting sort
    int input;
    while (n--)
    {
        cin >> input;
        numbers[input]++;
    }

    for (int i = 1; i <= MAX; i++)
    {
        if (numbers[i] == 0)
        {
            continue;
        }

        for (int j = 0; j < numbers[i]; j++)
        {
            cout << i << "\n";
        }
    }

    return 0;
}