#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    int input;
    cin >> input;

    for (int i = input; i > 0; i--)
    {
        cout << i << "\n";
    }
    
    return 0;
}