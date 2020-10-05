#include <iostream>
using namespace std;
int calculateFirstValue(int line)
{
    return 2 + 3 * (line - 1) * (line - 2);
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    int line = 1;
    if (n > 1)
    {
        while (true)
        {
            if (calculateFirstValue(line + 1) > n)
            {
                break;
            }

            line++;
        }
    }

    cout << line;
    return 0;
}