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
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;
        
        int k = 0;
        for (int i = 0; i < size; i++)
            k = __gcd(abs(vec[i] - (i + 1)), k);
        cout << k << endl;
    }

    return 0;
}