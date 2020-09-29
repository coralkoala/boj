#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((b < c && (b <= a && a <= c)) ||
        (c < b && (c <= a && a <= b)))
    {
        cout << a << endl;
    }
    else if ((a < c && (a <= b && b <= c)) ||
        (c < a && (c <= b && b <= a)))
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }

    return 0;
}