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
        ll n, k, x;
        cin >> n >> k >> x;

        ll minSum = k*(k + 1)/2;
        ll maxSum =  (n*(n + 1) / 2) - ((n - k)*(n - k + 1) / 2);
        cout << (minSum <= x && x <= maxSum ? "YES" : "NO") << endl;
    }

    return 0;
}