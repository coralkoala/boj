#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int space = i <= n ? i - 1 : 2 * n - i - 1;
        int starCount = 2 * n - 1 - space * 2;

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < starCount; j++)
        {
            cout << "*";
        }
        
        cout << "\n";
    }

    return 0;
}