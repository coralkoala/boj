#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    const int COUNT = 10;

    int a, b, c;
    cin >> a >> b >> c;

    int numberArray[COUNT] = {0,};
    string result = to_string(a * b * c);

    for (int i = 0; i < result.length(); i++)
    {
        int number = result[i] - '0';
        numberArray[number]++;
    }

    for (int i = 0; i < COUNT; i++)
    {
        cout << numberArray[i] << "\n";
    }

    return 0;
}