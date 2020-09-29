#include <iostream>
using namespace std;

struct bodySize
{
    int weight;
    int height;
    int rank;
};

int compare(const bodySize& lhs, const bodySize& rhs)
{
    const int lhsResult = -1;
    const int equalResult = 0;
    const int rhsResult = 1;

    if (lhs.weight > rhs.weight && lhs.height > rhs.height)
    {
        return lhsResult;
    }
    else if (lhs.weight < rhs.weight && lhs.height < rhs.height)
    {
        return rhsResult;
    }
    else
    {
        return equalResult;
    }
}

int main()
{
    const int MAX = 50;
    bodySize sizeArray[MAX];

    int input;
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        cin >> sizeArray[i].weight >> sizeArray[i].height;
        sizeArray[i].rank = 1;
    }

    for (int i = 0; i < input - 1; i++)
    {
        for (int j = i + 1; j < input; j++)
        {
            int result = compare(sizeArray[i], sizeArray[j]);
            if (result == 0)
            {
                continue;
            }
            else if (result == -1)
            {
                sizeArray[j].rank++;
            }
            else if (result == 1)
            {
                sizeArray[i].rank++;
            }
        }
    }

    for (int i = 0; i < input; i++)
    {
        cout << sizeArray[i].rank << " ";
    }

    return 0;
}