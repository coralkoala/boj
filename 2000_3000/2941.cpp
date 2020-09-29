#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 100;
    string input;
    cin >> input;

    int length = input.length();
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        count++;

        // 맨 마지막이고 단일 알파벳이면 밑의 경우에 해당되지 않음
        if (i == length - 1)
        {
            continue;
        }

        char target = input[i];
        char next = input[i + 1];

        if (target == 'c')
        {
            if (next == '=' || next == '-')
            {
                i++;
                continue;
            }
        }
        else if (target == 'd')
        {
            if (next == '-')
            {
                i++;
                continue;
            }
            else if (next == 'z')
            {
                if (i + 2 >= length)
                {
                    continue;
                }
                else
                {
                    char nextNext = input[i + 2];
                    if (nextNext == '=')
                    {
                        i += 2;
                        continue;
                    }
                }
            }
        }
        else if (target == 'l' || target == 'n')
        {
            if (next == 'j')
            {
                i++;
                continue;
            }
        }
        else if (target == 's' || target == 'z')
        {
            if (next == '=')
            {
                i++;
                continue;
            }
        }
    }

    cout << count;
    return 0;
}