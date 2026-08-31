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
        
        int ans = vec.back() - vec.front();
        for (int i = 0; i < size - 1; i++) ans = max(vec[i] - vec[i + 1], ans);
        for (int i = 1; i < size; i++) ans = max(vec[i] - vec.front(), ans);
        for (int i = 0; i < size - 1; i++) ans = max(vec.back() - vec[i], ans);
        cout << ans << endl;
    }

    return 0;
}