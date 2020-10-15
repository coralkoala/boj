#include <cmath>
#include <iostream>
#include <string>
using namespace std;
long long getValue(string color)
{
    if (color.compare("black") == 0) return 0;
    else if (color.compare("brown") == 0) return 1;
    else if (color.compare("red") == 0) return 2;
    else if (color.compare("orange") == 0) return 3;
    else if (color.compare("yellow") == 0) return 4;
    else if (color.compare("green") == 0) return 5;
    else if (color.compare("blue") == 0) return 6;
    else if (color.compare("violet") == 0) return 7;
    else if (color.compare("grey") == 0) return 8;
    else if (color.compare("white") == 0) return 9;
    else return -1;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string add1, add2, mul;
    cin >> add1 >> add2 >> mul;

    long long result = (getValue(add1) * 10 + getValue(add2)) * pow(10, getValue(mul));
    cout << result;
    return 0;
}