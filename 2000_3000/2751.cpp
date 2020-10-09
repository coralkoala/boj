#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // equal to 2750
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    int n;
    cin >> n;

    int input;
    vector<int> numbers;

    while (n--)
    {
        cin >> input;
        numbers.push_back(input);
    }

    sort(numbers.begin(), numbers.end());
    for (auto number : numbers)
    {
        cout << number << "\n";
    }

    return 0;
}