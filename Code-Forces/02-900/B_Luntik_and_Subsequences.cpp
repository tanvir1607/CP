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

        int cnt0 = count(vec.begin(), vec.end(), 0);
        int cnt1 = count(vec.begin(), vec.end(), 1);
        cout << (1LL << cnt0) * cnt1 << endl;
    }

    return 0;
}