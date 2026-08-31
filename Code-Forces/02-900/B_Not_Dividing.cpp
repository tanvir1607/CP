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

        for (int &x : vec) x == 1 ? x++ : x;
        for (int i = 1; i < size; i++) vec[i] += vec[i] % vec[i - 1] == 0;

        for (int x : vec) cout << x << " ";
        cout << endl;
    }

    return 0;
}