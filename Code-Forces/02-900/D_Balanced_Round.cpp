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
        ll size, k;
        cin >> size >> k;
        vector<ll> vec(size);
        for (ll &x : vec) cin >> x;
        
        sort(vec.begin(), vec.end());
        int longestLen = 1, count = 1;
        for (int i = 1; i < size; i++)
        {
            abs(vec[i] - vec[i - 1]) <= k ? count++ : count = 1;
            longestLen = max(count, longestLen);
        }
        cout << size - longestLen << endl;
    }

    return 0;
}