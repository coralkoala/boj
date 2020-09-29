#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int max = 0;
    int lineNumber = 0;
  
    int input;
    for (int i = 1; i <= 9; i++)
    {
        cin >> input;
        if (max < input)
        {
            max = input;
            lineNumber = i;
        }
    }

    cout << max << "\n" << lineNumber;
    return 0;
}