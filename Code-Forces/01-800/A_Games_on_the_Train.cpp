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

        int mx = *max_element(vec.begin(), vec.end());
        int mn = *min_element(vec.begin(), vec.end());
        cout << (mx + 1 - mn) << endl;
    }

    return 0;
}