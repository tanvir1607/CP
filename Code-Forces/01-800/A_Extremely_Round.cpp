// Approach - 2 --> By Math
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
        int num;
        cin >> num;

        int digit = (int)log10(num);
        int ans = num / pow(10, digit) + digit * 9;
        cout << ans << endl;
    }

    return 0;
}