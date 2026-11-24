// Solution - 01
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int size;
    cin >> size;
    vector<int> vec(size);
    for (int &x : vec) cin >> x;

    sort(vec.begin(), vec.end());
    for (int i = 1; i <= size; i++)
    {
        if (vec[i] != i)
        {
            cout << i << endl;
            break;
        }
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

    int size;
    cin >> size;
    vector<int> vec(size - 1);
    for (int &x : vec) cin >> x;
    
    sort(vec.begin(), vec.end());
    int l = 0, r = vec.size() - 1;
    int ans = size;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (vec[mid] != mid + 1) r = mid - 1, ans = mid + 1;
        else l = mid + 1;
    }
    cout << ans << endl;

    return 0;
}