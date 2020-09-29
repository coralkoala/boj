#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    int count;
    cin >> count;

    int repeat;
    string input;
    
    while (count-- > 0)
    {
        cin >> repeat >> input;
        for (int i = 0; i < input.length(); i++)
        {
            for (int j = 0; j < repeat; j++)
            {
                cout << input[i];
            }
        }

        cout << '\n';
    }

    return 0;
}