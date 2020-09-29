#include <iostream>
#include <istream>
#include <string>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 1000000 + 1;

    char input[MAX];
    cin.getline(input, MAX);

    int index = 0;
    int count = 0;
    bool vocaStart = false;
    while (true)
    {
        if (input[index] == '\0')
        {
            break;
        }

        if (input[index] == ' ')
        {
            vocaStart = false;
        }
        else
        {
            if (vocaStart == false)
            {
                vocaStart = true;
                count++;
            }
        }

        index++;
    }

    cout << count;
    return 0;
}