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
        vector<int> vec(3);
        for (int &x : vec) cin >> x;

        int ans = 0;
        while (vec[0] != vec[1] && vec[1] != vec[2] && vec[0] != vec[2])
        {
            sort(vec.begin(), vec.end());
            vec.back()--;
            vec.front()++;
            ans++;
        }
        cout << ans << endl;
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
        vector<int> vec(3);
        for (int &x : vec) cin >> x;
        sort(vec.begin(), vec.end());
        cout << min(vec[1] - vec[0], vec[2] - vec[1]) << endl;
    }

    return 0;
}