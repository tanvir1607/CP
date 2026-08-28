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
        string str;
        cin >> size >> str;

        int count = 1, ans = 1;
        for (int i = 1; i < size; i++)
        {
            str[i] == str[i - 1] ? count++ : count = 1;
            ans = max(count, ans);
        }
        cout << ans + 1 << endl;
    }

    return 0;
}
 