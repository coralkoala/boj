#include <iostream>
#include <string>
using namespace std;
int main()
{
    int input;
    cin >> input;

    int count = 0;
    int titleNumber = 666;

    string number;
    while (true)
    {
        number = to_string(titleNumber);
        for (int i = 0; i < number.length() - 2; i++)
        {
            if (number[i] == '6' && number[i + 1] == '6' && number[i + 2] == '6')
            {
                count++;
                break;
            }
        }

        if (count == input)
        {
            break;
        }

        titleNumber++;
    }

    cout << titleNumber << endl;
    return 0;
}