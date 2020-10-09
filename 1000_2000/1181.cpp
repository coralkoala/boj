#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool Comparer(string lhs, string rhs)
{
    int lhsLength = lhs.length();
    int rhsLength = rhs.length();

    if (lhsLength != rhsLength)
    {
        return lhsLength < rhsLength;
    }
    
    return lhs.compare(rhs) < 0;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    int n;
    cin >> n;

    string input;
    vector<string> vocas;
    while (n--)
    {
        cin >> input;
        vocas.push_back(input);
    }

    sort(vocas.begin(), vocas.end(), Comparer);

    auto end = unique(vocas.begin(), vocas.end());
    for (auto iter = vocas.begin(); iter != end; iter++)
    {
        cout << *iter << '\n';
    }

    return 0;
}