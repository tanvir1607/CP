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

    int count = 1;
    int ans = 1;
    int size = str.size();
    for (int i = 1; i < size; i++)
    {
        if (str[i] == str[i - 1]) count++, ans = max(count, ans);
        else count = 1;
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

    int l = 0;
    int ans = 0;
    int size = str.size();
    for (int r = 0; r < size; r++)
    {
        if (str[l] == str[r]) ans = max(r - l + 1, ans);
        else l = r;
    }
    cout << ans << endl;

    return 0;
}