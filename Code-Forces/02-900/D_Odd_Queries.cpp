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
        int size, query;
        cin >> size >> query;
        vector<int> vec(size), prefixSum(size + 1);
        for (int &x : vec) cin >> x;
        for (int i = 1; i < size + 1; i++) prefixSum[i] = prefixSum[i - 1] + vec[i - 1];
        while (query--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll ans = prefixSum[l - 1] 
                        + (r - l + 1) * k 
                        + prefixSum.back() -  prefixSum[r];
            cout << ((ans & 1) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}