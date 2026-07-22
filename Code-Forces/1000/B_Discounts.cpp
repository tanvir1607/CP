// Solution - 01
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
        int n, k;
        cin >> n >> k;
        vector<int> vec(n), dis(k);
        for (int &x : vec) cin >> x;
        for (int &x : dis) cin >> x;

        sort(vec.rbegin(), vec.rend());
        sort(dis.begin(), dis.end());
        ll ans = 0, pos = 0;
        for (int x : dis)
        {
            if (pos + x > n) break;
            for (int i = 0; i < x - 1; i++) ans += vec[pos++];
            pos++;
        }
        while (pos < n) ans += vec[pos++];
        cout << ans << endl;
    }

    return 0;
}





// Solution - 02
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
        int n, k;
        cin >> n >> k;
        vector<int> vec(n), dis(k);
        for (int &x : vec) cin >> x;
        for (int &x : dis) cin >> x;

        sort(vec.rbegin(), vec.rend());
        sort(dis.begin(), dis.end());
        ll ans = accumulate(vec.begin(), vec.end(), 0LL);
        int pos = 0;
        for (int x : dis)
        {
            pos += x;
            if (pos > n) break;
            ans -= vec[pos - 1];
        }
        cout << ans << endl;
    }

    return 0;
}