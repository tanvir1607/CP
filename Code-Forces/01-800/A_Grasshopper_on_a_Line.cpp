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
        int goal, k;
        cin >> goal >> k;
        if (goal % k) cout << 1 << endl << goal << endl;
        else cout << 2 << endl << 1 << " " << goal - 1 << endl;
    }

    return 0;
}