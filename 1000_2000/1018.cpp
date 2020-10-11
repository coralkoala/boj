#include <cstring>
#include <iostream>
using namespace std;
int coloredCount(char* board, char firstColor, int i, int j, int width)
{
    int count = 0;
    char newBoard[8][8];
    memset(&newBoard[0][0], 0, sizeof(char) * 8 * 8);

    char firstSquare = *(board + sizeof(char) * (i * width + j));
    if (firstSquare != firstColor)
    {
        count++;
    }

    newBoard[0][0] = firstColor;
    for (int n = 0; n < 8; n++)
    {
        for (int m = 0; m < 8; m++)
        {
            if (newBoard[n][m] != 0)
            {
                continue;
            }

            if (m - 1 >= 0)
            {
                newBoard[n][m] = newBoard[n][m - 1] == 'W' ? 'B' : 'W';
            }
            else
            {
                newBoard[n][m] = newBoard[n - 1][m] == 'W' ? 'B' : 'W';
            }

            char original = *(board + sizeof(char) * ((i + n) * width + (j + m)));
            if (newBoard[n][m] != original)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    char board[n][m];
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    int minCount = 8 * 8;
    for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
        {
            int firstBlackCount = coloredCount(&board[0][0], 'B', i, j, m);
            int firstWhiteCount = coloredCount(&board[0][0], 'W', i, j, m);

            if (minCount > firstBlackCount)
            {
                minCount = firstBlackCount;
            }

            if (minCount > firstWhiteCount)
            {
                minCount = firstWhiteCount;
            }
        }
    }

    cout << minCount;
    return 0;
}