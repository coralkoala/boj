#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;

    while (input-- > 0)
    {
        int a, b;
        cin >> a >> b;

        cout << a + b << endl;
    }

    return 0;
}