#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int num;
    cin >> num;

    if (num == 2 || num == 3) cout << "NO SOLUTION" << endl;
    else 
    {
        for (int i = 2; i <= num; i += 2) cout << i << " ";
        for (int i = 1; i <= num; i += 2) cout << i << " ";
        cout << endl;
    }

    return 0;
}