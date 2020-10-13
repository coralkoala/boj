#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    double r;
    cin >> r;

    cout << fixed;
    cout.precision(6);

    cout << r * r * M_PI << '\n';
    cout << 2 * r * r;

    return 0;
}