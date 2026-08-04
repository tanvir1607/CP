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
        ll a, b, x;
        cin >> a >> b >> x;

        ll ans = INT_MAX;
        ll cntOfDivision = 0;
        while (a != b)
        {
            if (a < b) swap(a, b);
            ans = min(a - b + cntOfDivision, ans);
            a /= x;
            cntOfDivision++;
        }
        ans = min(cntOfDivision, ans);
        cout << ans << endl;
    }

    return 0;
}