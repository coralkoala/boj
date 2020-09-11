#include <iostream>

using namespace std;
int main()
{
    int count = 0;
    cin >> count;

    int result = 1;
    while (count > 0)
    {
        result *= count;
        count--;
    }

    cout << result << endl;
    return 0;
}