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
        int size, k;
        string str;
        cin >> size >> k >> str;

        map<char, int> freq;
        for (char ch : str) freq[ch]++;
        int oddCnt = 0;
        for (auto [_, val] : freq) oddCnt += val % 2;
        cout << (oddCnt - k <= 1 ? "YES" : "NO") << endl;
    }

    return 0;
}