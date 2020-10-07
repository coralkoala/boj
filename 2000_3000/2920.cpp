#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int INPUT_COUNT = 8;

    int input[INPUT_COUNT];
    string result;

    for (int i = 0; i < INPUT_COUNT; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < INPUT_COUNT - 1; i++)
    {
        if (input[i] + 1 == input[i + 1])
        {
            result = "ascending";
        }
        else if (input[i] - 1 == input[i + 1])
        {
            result = "descending";
        }
        else
        {
            result = "mixed";
            break;
        }
    }

    cout << result;
    return 0;
}