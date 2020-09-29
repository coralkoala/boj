#include <iostream>
#include <string>

using namespace std;
bool CheckValidParenthesisString(string input)
{
    int checker = 0;
    for (int i = 0; i < input.length(); ++i)
    {
        if (input[i] == '(')
        {
            checker++;
        }
        else if (input[i] == ')')
        {
            checker--;
        }

        if (checker < 0)
        {
            return false;
        }
    }

    return checker == 0;
}

int main()
{
    int count = 0;
    cin >> count;

    while (count-- > 0)
    {
        string input;
        cin >> input;

        string result = CheckValidParenthesisString(input) ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}