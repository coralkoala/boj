#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    int input;
    cin >> input;

    for (int i = 1; i <= input; i++)
    {
        for (int j = input; j > 0; j--)
        {
            if (j <= i)
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