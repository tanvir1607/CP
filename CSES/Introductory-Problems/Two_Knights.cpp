#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int n;
    cin >> n;
    for (ll k = 1; k <= n; k++)
    {
        ll total = k * k * (k * k - 1) / 2;
        ll attacking = 4 * (k - 1) * (k - 2);
        cout << total - attacking << endl;
    }

    return 0;
}