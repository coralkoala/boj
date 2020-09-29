#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int x;
    cin >> x;

    int line = 0;
    int sum = 0;
    while (sum < x)
    {
        line++;
        sum += line;
    }

    int gap = sum - x;
    if (line % 2 == 0)
    {
        cout << line - gap << "/" << 1 + gap;
    }
    else
    {
        cout << 1 + gap << "/" << line - gap;
    }
    
    return 0;
}