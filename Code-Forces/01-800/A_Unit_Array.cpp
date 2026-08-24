// Solution - 01
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

        int cnt1 = count(vec.begin(), vec.end(), 1);
        int cntNeg1 = size - cnt1;

        int operation = 0;
        while (!(cnt1 >= cntNeg1 && cntNeg1 % 2 == 0))
        {
            cnt1++;
            cntNeg1--;
            operation++;
        }
        cout << operation << endl;
    }

    return 0;
}





// Solution - 02
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

        int cnt1 = count(vec.begin(), vec.end(), 1);
        int cntNeg1 = size - cnt1;

        int ans = max(0, cntNeg1 - size / 2);
        (cntNeg1 - ans) & 1 ? ans++ : ans;
        cout << ans << endl;
    }

    return 0;
}