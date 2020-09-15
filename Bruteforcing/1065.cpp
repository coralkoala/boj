#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;

    if (input < 100)
    {
        cout << input << endl;
    }
    else if (100 <= input && input < 111)
    {
        cout << 99 << endl;
    }
    else if (input == 1000)
    {
        cout << 144 << endl;
    }
    else if (111 <= input && input < 1000)
    {
        int result = 99;
        for (int i = 111; i <= input; ++i)
        {
            int a = i / 100;
            int b = (i % 100) / 10;
            int c = i % 10;

            if ((a - b) == (b - c))
            {
                result++;
            }
        }

        cout << result << endl;
    }

    return 0;
}