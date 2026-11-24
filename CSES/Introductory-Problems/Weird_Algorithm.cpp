#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    ll num;
    cin >> num;
    cout << num << " ";
    while (num != 1)
    {
        num = num % 2 ? num * 3 + 1 : num / 2;
        cout << num << " ";
    }
    cout << endl;

    return 0;
}