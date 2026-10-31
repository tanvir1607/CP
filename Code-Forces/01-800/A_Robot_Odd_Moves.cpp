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
        int a, b;
        cin >> a >> b;
        
        if (b > a + 1) cout << -1 << endl;
        else if (a % 2 == b % 2) cout << a << endl;
        else cout << a + 1 << endl;
    }

    return 0;
}