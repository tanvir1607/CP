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
        int x, y, z;
        cin >> x >> y >> z;
        if (y >= z) cout << -1 << endl;
        else cout << (x + (z - y - 1))  / (z - y) << endl;
    }

    return 0;
}