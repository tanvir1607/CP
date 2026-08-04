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

        map<int, int> freq;
        for (int i = 0; i < size; i++) freq[i % k] += str[i] - '0';
        bool flag = true;
        for (auto [_, val] : freq)
        {
            if (val & 1)
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}