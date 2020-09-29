#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, x;
    cin >> n >> x;

    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input < x)
        {
            cout << input << " ";
        }
    }

    return 0;
}