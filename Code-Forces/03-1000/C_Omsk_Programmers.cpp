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
        int a, b, x;
        cin >> a >> b >> x;

        int ans = abs(a - b);
        int divCnt = 0;
        while (a != b)
        {
            if (a > b) swap(a, b);
            b /= x;
            divCnt++;
            ans = min(abs(b - a) + divCnt, ans);
        }
        cout << ans << endl;
    }

    return 0;
}