#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int solve()
{
    int size;
    string str;
    cin >> size >> str;
    for (int i = 0, j = 1, k = 2; k < size; i++, j++, k++)
    {
        if (str[i] == '.' && str[j] == '.' && str[k] == '.') 
            return 2;
    }
    return count(str.begin(), str.end(), '.');
}

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        cout << solve() << endl;
    }

    return 0;
}