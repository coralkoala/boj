#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct Point
{
    int x;
    int y;
};

bool Comparer(Point lhs, Point rhs)
{
    if (lhs.y != rhs.y)
    {
        return lhs.y < rhs.y;
    }

    return lhs.x < rhs.x;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    vector<Point> points;
    while (n--)
    {
        Point point;
        cin >> point.x >> point.y;
        points.push_back(point);
    }

    sort(points.begin(), points.end(), Comparer);

    for (auto point : points)
    {
        cout << point.x << ' ' << point.y << '\n';
    }

    return 0;
}