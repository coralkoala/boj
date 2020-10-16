#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> inputs;
    int input;

    while (n--)
    {
        cin >> input;
        inputs.push_back(input);
    }

    sort(inputs.begin(), inputs.end());
    auto endIter = unique(inputs.begin(), inputs.end());
    
    for (auto iter = inputs.begin(); iter != endIter; iter++)
    {
        cout << *iter << ' ';
    }

    return 0;
}