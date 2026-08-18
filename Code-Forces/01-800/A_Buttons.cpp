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
        
        int first = a + (c + 1) / 2;
        int second = b + c / 2;
        cout << (first > second ? "First" : "Second") << endl;
    }

    return 0;
}