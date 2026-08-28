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
        ll num;
        cin >> num;

        int i = 1;
        while (num % i == 0) i++;
        cout << --i << endl;
    }

    return 0;
}