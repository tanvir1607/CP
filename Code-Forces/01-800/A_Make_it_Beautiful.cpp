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
        if (vec.front() == vec.back()) cout << "NO" << endl;
        else
        {
            cout << "YES" << endl << vec.back() << " ";
            for (int i = 0; i < size - 1; i++) cout << vec[i] << " ";
            cout << endl;
        }
    }

    return 0;
}