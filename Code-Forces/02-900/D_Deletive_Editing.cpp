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
        string str, target, temp;
        cin >> str >> target;

        map<char, int> freq;
        for (char ch : target) freq[ch]++;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (freq[str[i]] > 0) 
            {
                freq[str[i]]--;
                temp.push_back(str[i]);
            }
        }
        reverse(temp.begin(), temp.end());
        cout << (temp == target ? "YES" : "NO")<< endl;
    }

    return 0;
}