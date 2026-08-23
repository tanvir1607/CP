#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

vector<int> dx = {1, 1, -1, -1};
vector<int> dy = {1, -1, 1, -1};

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        set<pair<int, int>> kingPos, queenPos;
        for (int i = 0; i < 4; i++)
        {
            kingPos.insert({xK + dx[i] * a, yK + dy[i] * b});
            kingPos.insert({xK + dx[i] * b, yK + dy[i] * a});
            queenPos.insert({xQ + dx[i] * a, yQ + dy[i] * b});
            queenPos.insert({xQ + dx[i] * b, yQ + dy[i] * a});
        }
        int ans = 0;
        for (auto position : kingPos) ans += queenPos.count(position);
        cout << ans << endl;
    }

    return 0;
}