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
        vector<int> vec(size), ans;
        for (int &x : vec) cin >> x;

        for (int i = 0; i < size; i++)
        {
            if (i == 0 || vec[i - 1] <= vec[i]) ans.push_back(vec[i]);
            else ans.push_back(vec[i]), ans.push_back(vec[i]);
        }
        cout << ans.size() << endl;
        for (int x : ans) cout << x << " ";
        cout << endl;
    }

    return 0;
}