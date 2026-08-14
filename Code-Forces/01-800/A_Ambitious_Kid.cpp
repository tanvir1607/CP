#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int size;
    cin >> size;
    vector<int> vec(size);
    for (int &x : vec) cin >> x;
    
    int ans = INT_MAX;
    for (int x : vec) ans = min(abs(x), ans);
    cout << ans << endl;

    return 0;
}