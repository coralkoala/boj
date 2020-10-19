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

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    queue<int> cardQueue;
    for (int i = 1; i <= n; i++)
    {
        cardQueue.push(i);
    }

    while (true)
    {
        cardQueue.pop();
        
        int front = cardQueue.front();
        if (cardQueue.size() == 1)
        {
            cout << front;
            break;
        }

        cardQueue.pop();
        cardQueue.push(front);
    }

    return 0;
}