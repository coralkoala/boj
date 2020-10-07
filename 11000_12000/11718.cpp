#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string input;
    while (!cin.eof())
    {
        getline(cin, input);
        cout << input << "\n";
    }

    return 0;
}