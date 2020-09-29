#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    int a, b, c;
    cin >> a >> b >> c;

    if (c - b <= 0)
    {
        cout << -1;
    }
    else
    {
        int benefit = c - b;
        cout << a / benefit + 1;
    }
    
    return 0;
}