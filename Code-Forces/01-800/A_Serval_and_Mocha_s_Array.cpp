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

        bool found = false;
        for (int i = 0; i < size && !found; i++)
        {
            for(int j = i + 1; j < size && !found; j++)
            {
                if (__gcd(vec[i], vec[j]) <= 2) found = true;
            }
        }
        cout << (found ? "Yes" : "No") << endl;
    }

    return 0;
}