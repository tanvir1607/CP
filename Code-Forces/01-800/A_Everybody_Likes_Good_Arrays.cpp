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

        int ans = 0;
        for (int i = 0; i < size - 1; i++) 
            ans += ((vec[i] ^ vec[i + 1]) & 1) == 0;
            //ans += vec[i] % 2 == vec[i + 1] % 2;
        cout << ans << endl;
    }

    return 0;
}