#include <iostream>

using namespace std;
int main()
{
    const int MAX = 10000;

    int stackArray[MAX];
    int top = 0;

    int count = 0;
    cin >> count;

    while (count-- > 0)
    {
        string command;
        cin >> command;

        if (command.compare("push") == 0)
        {
            int number = 0;
            cin >> number;

            stackArray[top++] = number;
        }
        else if (command.compare("pop") == 0)
        {
            if (top == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << stackArray[top - 1] << endl;
                stackArray[top--] = 0;
            }
        }
        else if (command.compare("size") == 0)
        {
            cout << top << endl;
        }
        else if (command.compare("empty") == 0)
        {
            int result = top == 0 ? 1 : 0;
            cout << result << endl;
        }
        else if (command.compare("top") == 0)
        {
            if (top == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << stackArray[top - 1] << endl;
            }
        }
    }

    return 0;
}