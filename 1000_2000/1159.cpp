#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    int firstName[26] = {0};    // A-Z
    char name[31];

    while (n--)
    {
        cin >> name;
        firstName[name[0] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (firstName[i] >= 5)
        {
            cout << char('a' + i);
            count++;
        }
    }

    if (count == 0)
    {
        cout << "PREDAJA";
    }

    return 0;
}