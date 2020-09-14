#include <iostream>

using namespace std;
int Fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(number - 2) + Fibonacci(number - 1);
    }
}

int main()
{
    int count = 0;
    cin >> count;

    cout << Fibonacci(count) << endl;

    return 0;
}