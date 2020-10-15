#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    const int MAX = 10001;
    char a[MAX], b[MAX];
    cin >> a >> b;

    long long sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int curA = a[i] - '0';
        if (curA <= 0)
        {
            continue;
        }

        for (int j = 0; j < strlen(b); j++)
        {
            sum += curA * (b[j] - '0');
        }
    }

    cout << sum;
    return 0;
}