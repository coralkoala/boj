#include <iostream>
#include <string>
using namespace std;
string reverse(string input)
{
    int length = input.length();
    char output[length];

    for (int i = 0; i < length; i++)
    {
        output[i] = input[length - i - 1];
    }

    return output;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int reverseA = stoi(reverse(to_string(a)));
    int reverseB = stoi(reverse(to_string(b)));
    
    int answer = reverseA > reverseB ? reverseA : reverseB;
    cout << answer;
    return 0;
}