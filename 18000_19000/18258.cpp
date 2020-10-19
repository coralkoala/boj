#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    queue<int> intQueue;
    string command;

    while (n--)
    {
        cin >> command;
        if (command == "push")
        {
            int input;
            cin >> input;

            intQueue.push(input);
        }
        else if (command == "pop")
        {
            if (intQueue.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << intQueue.front() << '\n';
                intQueue.pop();
            }
        }
        else if (command == "size")
        {
            cout << intQueue.size() << '\n';
        }
        else if (command == "empty")
        {
            int result = intQueue.empty() == true ? 1 : 0;
            cout << result << '\n';
        }
        else if (command == "front")
        {
            if (intQueue.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << intQueue.front() << '\n';
            }
        }
        else if (command == "back")
        {
            if (intQueue.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << intQueue.back() << '\n';
            }
        }
    }

    return 0;
}