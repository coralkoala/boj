#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;

    int result = 0;
    for (int i = 1; i <= input; i++)
    {
        result += i;
    }

    cout << result << endl;
    return 0;
}