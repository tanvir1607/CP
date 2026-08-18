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
        vector<int> vec(3);
        for (int &x : vec) cin >> x;
        sort(vec.begin(), vec.end());
        cout << min(vec[2] - vec[0], vec[1]) << endl;
    }

    return 0;
}