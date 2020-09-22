#include <iostream>

using namespace std;
int main()
{
    const int MAX = 100;

    int count;
    cin >> count;

    char input[MAX];
    cin >> input;

    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += input[i] - '0';
    }

    cout << sum << endl;
    return 0;
}