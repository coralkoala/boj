#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    char chess[9];
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> chess;
        for (int j = 0; j < 8; j++)
        {
            if (chess[j] == 'F' && (i % 2 == j % 2))
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}