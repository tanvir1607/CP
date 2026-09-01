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

        int maxFreq = INT_MIN;
        for (auto [_, val] : freq) maxFreq = max(val, maxFreq);
        int clone = (int) ceil(log2((float) size / maxFreq));
        int swap = size - maxFreq;
        cout << clone + swap << endl;
    }

    return 0;
}