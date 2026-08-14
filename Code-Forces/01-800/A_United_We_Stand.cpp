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

        sort(vec.begin(), vec.end());
        if (vec.front() == vec.back())
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> b, c;
        b.push_back(vec.front());
        for (int i = 1; i < size; i++)
        {
            if (vec[0] % vec[i]) c.push_back(vec[i]);
            else b.push_back(vec[i]);
        }
        cout << b.size() << " " << c.size() << endl;
        for (int x : b) cout << x << " ";
        cout << endl;
        for (int x : c) cout << x << " ";
        cout << endl;
    }

    return 0;
}