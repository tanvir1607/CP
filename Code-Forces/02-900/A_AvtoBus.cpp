// Approach - 1
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
        ll bus;
        cin >> bus;
        if ((bus & 1) || bus < 4) cout << -1 << endl;
        else cout << (bus + 5) / 6 << " " << bus / 4 << endl;
    }

    return 0;
}