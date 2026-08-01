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

        vector<int> center;
        for (int i = 0, j = 1, k = 2; k < size; i++, j++, k++)
            if (vec[i] > vec[j] && vec[j] < vec[k]) center.push_back(j);
        for (int idx : center)
        {
            vec[idx - 1] = min(vec[idx], vec[idx - 1]);
            vec[idx + 1] = min(vec[idx], vec[idx + 1]);
        }
        ll sum = accumulate(vec.begin(), vec.end(), 0LL);
        cout << sum << endl;
    }

    return 0;
}