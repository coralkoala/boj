#include <iostream>
#include <cmath>
using namespace std;
void printIsRightTriangle(double a, double b, double c)
{
    bool isRightTriangle = pow(c, 2) == pow(a, 2) + pow(b, 2);
    if (isRightTriangle)
    {
        cout << "right\n";
    }
    else
    {
        cout << "wrong\n";
    }
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        if (a >= b && a >= c)
        {
            printIsRightTriangle(b, c, a);
        }
        else if (b >= a && b >= c)
        {
            printIsRightTriangle(a, c, b);
        }
        else if (c >= a && c >= b)
        {
            printIsRightTriangle(a, b, c);
        }
    }

    return 0;
}