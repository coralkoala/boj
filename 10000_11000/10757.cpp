#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string inputA, inputB;
    cin >> inputA >> inputB;

    vector<int> numA, numB, result;
    for (int i = 0; i < inputA.length(); i++)
        numA.push_back(inputA[i] - '0');
    for (int i = 0; i < inputB.length(); i++)
        numB.push_back(inputB[i] - '0');

    int remainA = inputA.length();
    int remainB = inputB.length();
    int a = 0, b = 0, plus = 0;

    while (remainA > 0 || remainB > 0)
    {
        int indexA = --remainA;
        int indexB = --remainB;

        if (indexA >= 0)
            a = numA[indexA];
        else
            a = 0;
        
        if (indexB >= 0)
            b = numB[indexB];
        else
            b = 0;
        
        int res = a + b + plus;
        if (res >= 10)
        {
            plus = res / 10;
            res = res % 10;
        }
        else
        {
            plus = 0;
        }
        
        result.push_back(res);
    }

    if (plus > 0)
        result.push_back(plus);

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i];

    return 0;
}