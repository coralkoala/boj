#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int spaceCount = n - i;
        int starCount = 2 * i - 1;

        for (int j = 0; j < spaceCount; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < starCount; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}