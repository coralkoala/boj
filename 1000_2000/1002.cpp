#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int input;
    cin >> input;

    while (input-- > 0)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2)
            {
                cout << "-1\n";
            }
            else
            {
                cout << "0\n";
            }
            
            continue;
        }

        double distance = pow(x1 - x2, 2) + pow(y1 - y2, 2);
        double plusLength = pow(r1 + r2, 2);

        if (distance > plusLength)
        {
            cout << "0\n";
        }
        else if (distance == plusLength)
        {
            cout << "1\n";
        }
        else
        {
            double minusLength = pow(r1 - r2, 2);
            if (distance > minusLength)
            {
                cout << "2\n";
            }
            else if (distance == minusLength)
            {
                cout << "1\n";
            }
            else if (distance < minusLength)
            {
                cout << "0\n";
            }
        }
    }

    return 0;
}