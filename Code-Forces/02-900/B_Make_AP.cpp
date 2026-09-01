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
        int a, b, c;
        cin >> a >> b >> c;

        bool flag = false;
        int exp1 = 2 * b - c;
        int exp2 = a + c;
        int exp3 = 2 * b - a;
    
        if (exp1 / a > 0 && exp1 % a == 0) flag = true;
        else if (exp2 / (2*b) > 0 && exp2 % (2*b) == 0) flag = true;
        else if (exp3 / c > 0 && exp3 % c == 0) flag = true;

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}