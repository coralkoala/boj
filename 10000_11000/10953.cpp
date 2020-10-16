#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int t;
    cin >> t;

    string input;
    while (t--)
    {
        cin >> input;
        cout << input[0] - '0' + input[2] - '0' << '\n';
    }

    return 0;
}