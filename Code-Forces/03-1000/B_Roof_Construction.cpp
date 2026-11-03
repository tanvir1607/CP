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
        int n;
        cin >> n;
        
        n--;
        int msb = (int)log2(n);
        int limit = pow(2, msb);
        for (int i = limit - 1; i >= 0; i--) cout << i << " ";
        for (int i = limit; i <= n; i++) cout << i << " ";
        cout << endl;
    }

    return 0;
}
