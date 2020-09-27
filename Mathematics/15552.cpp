#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int input;
    cin >> input;

    int a, b;
    for (int i = 0; i < input; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}