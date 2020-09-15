#include <iostream>

using namespace std;
int main()
{
    int input;
    cin >> input;

    int cycle = 0;
    int result = input;

    do
    {
        int a = 0;
        if (result >= 10)
        {
            a = result / 10;
        }

        int b = result % 10;
        
        result = b * 10 + ((a + b) % 10);
        cycle++;
    } while (input != result);
    
    cout << cycle << endl;
    return 0;
}