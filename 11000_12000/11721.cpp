#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 100;
    char input[MAX];
    cin >> input;

    for (int i = 0; i < MAX; i++)
    {
        if (input[i] == '\0')
        {
            break;
        }

        if (i > 0 && i % 10 == 0)
        {
            cout << "\n";
        }

        cout << input[i];
    }

    return 0;
}