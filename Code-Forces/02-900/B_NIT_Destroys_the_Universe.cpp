#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int solve()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    for (int &x : vec) cin >> x;

    if (count(vec.begin(), vec.end(), 0) == size) return 0;
    
    int l = 0, r = size - 1;
    while(vec[l] == 0) l++;
    while (vec[r] == 0) r--;
    for (int i = l; i < r; i++)
        if (vec[i] == 0) return 2;

    return 1;
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