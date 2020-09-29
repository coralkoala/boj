#include <iostream>

using namespace std;
int main()
{
    int point;
    cin >> point;

    if (90 <= point && point <= 100)
    {
        cout << "A" << endl;
    }
    else if (80 <= point && point < 90)
    {
        cout << "B" << endl;
    }
    else if (70 <= point && point < 80)
    {
        cout << "C" << endl;
    }
    else if (60 <= point && point < 70)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    return 0;
}