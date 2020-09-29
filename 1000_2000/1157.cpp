#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string input;
    cin >> input;

    int usedCountArray[26] = {0};
    int length = input.length();

    int maxCount = 0;
    for (int i = 0; i < length; i++)
    {
        int index = toupper(input[i]) - 'A';
        usedCountArray[index]++;

        if (maxCount < usedCountArray[index])
        {
            maxCount = usedCountArray[index];
        }
    }

    char result = '\0';
    for (int i = 0; i < 26; i++)
    {
        if (usedCountArray[i] < maxCount)
        {
            continue;
        }

        if (result == '\0')
        {
            result = i + 'A';
        }
        else
        {
            result = '?';
            break;
        }
    }

    cout << result;
    return 0;
}