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
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        bool flag = true;
        ll L = INT_MIN;
        ll R = INT_MAX;
        for (int i = 0, j = size - 1; i <= j; i++, j--) 
        {
            if (vec[i] == vec[j]) continue;

            ll small = min(vec[i], vec[j]);
            ll large = max(vec[i], vec[j]);
            if (large - small != 2) 
            {
                flag = false;
                break;
            }

            L = max(L, small);
            R = min(R, large);
        }
        if (flag && L < R) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}