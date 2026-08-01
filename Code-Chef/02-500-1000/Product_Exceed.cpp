#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int x, y, p;
        cin >> x >> y >> p;
        int ans = 0;
        while (x * y < p)
        {
            if (x * (y + 1) > (x + 1) * y) y++;
            else x++;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}