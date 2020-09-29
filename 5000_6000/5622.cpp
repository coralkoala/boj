#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int charToTimeArray[] = 
    {
        3, 3, 3,
        4, 4, 4,
        5, 5, 5,
        6, 6, 6,
        7, 7, 7,
        8, 8, 8, 8,
        9, 9, 9,
        10, 10, 10, 10
    };
    
    string input;
    cin >> input;

    int seconds = 0;
    for (int i = 0; i < input.length(); i++)
    {
        seconds += charToTimeArray[input[i] - 'A'];
    }

    cout << seconds;
    return 0;
}