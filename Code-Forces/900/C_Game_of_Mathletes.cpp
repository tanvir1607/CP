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
        int size, k, x;
        cin >> size >> k;
        map<int, int> freq;
        while (size--) cin >> x, freq[x]++;

        int ans = 0;
        for (auto [key, val] : freq) ans += min(freq[key], freq[k - key]);
        cout << ans / 2 << endl;
    }

    return 0;
}