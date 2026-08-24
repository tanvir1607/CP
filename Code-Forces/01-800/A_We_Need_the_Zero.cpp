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

        int totalXor = 0;
        for (int x : vec) totalXor ^= x;
        if (totalXor == 0) cout << 0 << endl;
        else if (size & 1) cout << totalXor << endl;
        else cout << -1 << endl;
    }

    return 0;
}