#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    int cute = 0;
    int notCute = 0;

    int input;
    while (n--)
    {
        cin >> input;
        if (input == 0)
            notCute++;
        else if (input == 1)
            cute++;
    }

    if (cute < notCute)
        cout << "Junhee is not cute!";
    else
        cout << "Junhee is cute!";
    
    return 0;
}