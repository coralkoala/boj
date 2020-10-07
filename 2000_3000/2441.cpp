#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    int space = 0;
    while (space < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (i < space)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << "\n";
        space++;
    }

    return 0;
}