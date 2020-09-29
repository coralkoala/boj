#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int count;
    cin >> count;

    int starCount;
    for (int i = 1; i <= 2 * count - 1; i++)
    {
        if (i < count)
        {
            starCount = i;
            
        }
        else
        {
            starCount = count - (i - count);
        }

        for (int j = 1; j <= starCount; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}