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

        reverse(str.begin(), str.end());
        int leadZeros = 0;
        for (char ch : str)
        {
            if (ch == '0') leadZeros++;
            else break;
        }
        int zeros = count(str.begin(), str.end(), '0');
        cout << str.size() - (zeros - leadZeros) - 1 << endl;
    }

    return 0;
}