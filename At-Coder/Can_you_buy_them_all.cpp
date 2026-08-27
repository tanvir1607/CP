#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (int &x : vec) cin >> x;

    for (int i = 1; i < n; i += 2) vec[i]--;
    cout << (accumulate(vec.begin(), vec.end(), 0) <= x ? "Yes" : "No") << endl;

    return 0;
}