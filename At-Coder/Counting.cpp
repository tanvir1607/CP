#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int a, b;
    cin >>  a >> b;
    //cout << (b >= a ? b - a + 1 : 0) << endl;
    cout << max(b - a + 1, 0) << endl;

    return 0;
}