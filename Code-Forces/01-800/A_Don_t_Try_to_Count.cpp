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
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;

        int ans = -1;
        for (int i = 0; i < 6 && ans == -1; i++, x += x)
        {
            if (x.find(s) != string::npos) ans = i;
        }
        cout << ans << endl;
    }

    return 0;
}