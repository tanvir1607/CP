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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b <= d && c <= a + d - b) cout << (d - b) + (a + d - b - c) << endl;
        else cout << -1 << endl;
    }

    return 0;
}