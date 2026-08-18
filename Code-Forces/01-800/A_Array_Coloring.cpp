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

        int oddCnt = 0;
        for (int x : vec) oddCnt += x % 2;
        cout << (oddCnt % 2 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}