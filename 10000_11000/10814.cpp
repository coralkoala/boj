#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct Member
{
    int age;
    string name;
};

bool MemberComparer(Member lhs, Member rhs)
{
    return lhs.age < rhs.age;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;

    vector<Member> members;
    while (n--)
    {
        Member member;
        cin >> member.age >> member.name;
        members.push_back(member);
    }

    stable_sort(members.begin(), members.end(), MemberComparer);
    for (auto member : members)
    {
        cout << member.age << ' ' << member.name << '\n';
    }

    return 0;
}