#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<int> intQueue;

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

            intQueue.push(number);
        }
        else if (command.compare("pop") == 0)
        {
            if (intQueue.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << intQueue.front() << endl;
                intQueue.pop();
            }
        }
        else if (command.compare("size") == 0)
        {
            cout << intQueue.size() << endl;
        }
        else if (command.compare("empty") == 0)
        {
            int result = intQueue.empty() ? 1 : 0;
            cout << result << endl;
        }
        else if (command.compare("front") == 0)
        {
            if (intQueue.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << intQueue.front() << endl;
            }
        }
        else if (command.compare("back") == 0)
        {
            if (intQueue.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << intQueue.back() << endl;
            }
        }
    }

    return 0;
}