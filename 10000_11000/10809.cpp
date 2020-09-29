#include <iostream>
#include <string>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int A_TO_Z = 26;
    int result[A_TO_Z];
    fill_n(result, A_TO_Z, -1);

    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        int index = input[i] - 'a';
        if (result[index] != -1)
        {
            continue;
        }

        result[index] = i;
    }

    for (int i = 0; i < A_TO_Z; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}