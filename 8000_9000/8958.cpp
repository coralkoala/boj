#include <iostream>
#include <string>

using namespace std;
int main()
{
    int count;
    cin >> count;

    while (count-- > 0)
    {
        string input;
        cin >> input;

        int score = 0;
        int plusScore = 1;

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == 'O')
            {
                score += plusScore++;
            }
            else
            {
                plusScore = 1;
            }
        }

        cout << score << endl;
    }

    return 0;
}