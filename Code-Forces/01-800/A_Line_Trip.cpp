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
        int size, x;
        cin >> size >> x;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        int ans = max(vec.front(), 2 * (x - vec.back()));
        for (int i = 1; i < size; i++) ans = max(ans, vec[i] - vec[i - 1]);
        cout << ans << endl;
    }

    return 0;
}