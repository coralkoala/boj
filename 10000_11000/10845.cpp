#include <iostream>

using namespace std;
int main()
{
    const int MAX = 10000;

    int queueArray[MAX];
    int front = 0, rear = 0;

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

            queueArray[rear++] = number;
        }
        else if (command.compare("pop") == 0)
        {
            if (rear - front <= 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << queueArray[front] << endl;
                queueArray[front++] = 0;
            }
        }
        else if (command.compare("size") == 0)
        {
            cout << rear - front << endl;
        }
        else if (command.compare("empty") == 0)
        {
            int result = rear - front == 0 ? 1 : 0;
            cout << result << endl;
        }
        else if (command.compare("front") == 0)
        {
            if (rear - front == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << queueArray[front] << endl;
            }
        }
        else if (command.compare("back") == 0)
        {
            if (rear - front == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << queueArray[rear - 1] << endl;
            }
        }
    }

    return 0;
}