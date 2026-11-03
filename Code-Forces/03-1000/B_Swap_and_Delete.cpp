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
        string str;
        cin >> str;

        int zeros = count(str.begin(), str.end(), '0');
        int ones = str.length() - zeros;
        int cost = str.length();
        for (char ch : str)
        {
            ch == '0' ? ones-- : zeros--;
            if (zeros < 0 || ones < 0 ) break;
            else cost--;
        }
        cout << cost << endl;
    }

    return 0;
}