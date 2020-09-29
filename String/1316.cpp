#include <iostream>
#include <string>
using namespace std;

bool checker(string input)
{
    bool checkArray[26];
    fill_n(checkArray, 26, false);

    for (int i = 0; i < input.length();)
    {
        char alphabet = input[i];

        int index = alphabet - 'a';
        if (checkArray[index] != false)
        {
            return false;
        }

        checkArray[index] = true;

        int plusIndex = 1;
        while (i + plusIndex < input.length())
        {
            if (alphabet != input[i + plusIndex])
            {
                break;
            }

            plusIndex++;
        }

        i += plusIndex;
    }

    return true;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int count;
    cin >> count;

    string input;

    int caseCount = 0;
    while (count-- > 0)
    {
        cin >> input;
        if (checker(input))
        {
            caseCount++;
        }        
    }

    cout << caseCount;
    return 0;
}