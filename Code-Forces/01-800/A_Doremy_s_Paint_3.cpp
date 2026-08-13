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
        map<int, int> freq;
        for (int &x : vec) cin >> x, freq[x]++;

        int f1 = freq.begin()->second;
        int f2 = freq.rbegin()->second;
        if (freq.size() == 1) cout << "Yes" << endl; 
        else if (freq.size() == 2 && abs(f1 - f2) == size % 2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}