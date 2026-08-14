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
        vector<int> vec(size - 1);
        for (int &x : vec) cin >> x;
        cout << (-1) * accumulate(vec.begin(), vec.end(), 0) << endl;
    }

    return 0;
}