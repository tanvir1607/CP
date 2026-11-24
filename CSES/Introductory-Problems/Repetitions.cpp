// Solution - 01
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    string str;
    cin >> str;

    int ans = 1, cnt = 1;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1]) cnt++, ans = max(cnt, ans);
        else cnt = 1;
    }
    cout << ans << endl;

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

    string str;
    cin >> str;

    int l = 0, r = 0;
    int ans = 0;
    while (r < str.size())
    {
        if (str[l] == str[r]) ans = max(r - l + 1, ans), r++;
        else l = r++;
    }
    cout << ans << endl;

    return 0;
}





// Solution - 03
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    string str;
    cin >> str;

    int ans = 0;
    for (int l = 0, r = 0; r < str.size(); r++)
    {
        if (str[l] == str[r]) ans = max(r - l + 1, ans);
        else l = r;
    }
    cout << ans << endl;

    return 0;
}