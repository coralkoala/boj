#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    const int COUNT = 10;
    const int NUMBER = 42;
    int resultArray[NUMBER] = {0,};

    int input;
    for (int i = 0; i < COUNT; i++)
    {
        cin >> input;
        int index = input % 42;
        resultArray[index]++;
    }

    int resultCount = 0;
    for (int i = 0; i < NUMBER; i++)
    {
        if (resultArray[i] > 0)
        {
            resultCount++;
        }
    }

    cout << resultCount;
    return 0;
}