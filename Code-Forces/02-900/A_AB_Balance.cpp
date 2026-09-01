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
        string str;
        cin >> str;

        str.front() = str.front() != str.back() ? str.back() : str.front();
        cout << str << endl;
    }

    return 0;
}