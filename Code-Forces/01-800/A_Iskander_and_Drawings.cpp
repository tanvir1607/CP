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
        ll size;
        string str;
        cin >> size >> str;

        ll count = 0, ans = 0;
        for (int i = 0; i < size; i++)
        {
            if (str[i] == '#') count++, ans = max(count, ans);
            else count = 0;
        }
        cout << (ans + 1) / 2 << endl;
    }

    return 0;
}