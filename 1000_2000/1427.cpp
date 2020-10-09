#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    string n;
    cin >> n;

    vector<int> numbers;

    int length = n.length();
    for (int i = 0; i < length; i++)
    {
        numbers.push_back(n[i] - '0');
    }

    sort(numbers.begin(), numbers.end(), greater<int>());
    
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i];
    }

    return 0;
}