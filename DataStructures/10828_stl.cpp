#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<int> intStack;

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

            intStack.push(number);
        }
        else if (command.compare("pop") == 0)
        {
            if (intStack.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << intStack.top() << endl;
                intStack.pop();
            }
        }
        else if (command.compare("size") == 0)
        {
            cout << intStack.size() << endl;
        }
        else if (command.compare("empty") == 0)
        {
            int result = intStack.empty() ? 1 : 0;
            cout << result << endl;
        }
        else if (command.compare("top") == 0)
        {
            if (intStack.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << intStack.top() << endl;
            }
        }
    }

    return 0;
}