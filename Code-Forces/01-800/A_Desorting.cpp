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

        int diff = INT_MAX;
        for (int i = 1; i < size; i++) diff = min(vec[i] - vec[i - 1], diff);
        cout << (diff < 0 ? 0 : (diff + 2) / 2) << endl;
    }

    return 0;
}