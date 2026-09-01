// // Solution - 01
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int solve(string str, string target)
// {
//     int op = 0;
//     int i = str.size() - 1;
//     int j = 1;
//     while (i >= 0 && j >= 0)
//     {
//         str[i] == target[j] ? j-- : op++;
//         i--;
//     }
//     return j < 0 ? op : INT_MAX;
// }

// int main() 
// {
//     optimize();

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         string str;
//         cin >> str;

//         int ans = INT_MAX;
//         for (string s: {"00", "25", "50", "75"}) ans = min(ans, solve(str, s));
//         cout << ans << endl;
//     }

//     return 0;
// }





// Solution - 02
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int solve(ll num, ll target)
{
    int check[2] = {target / 10, target % 10};
    int op = 0;
    int idx = 1;
    while (num && idx >= 0)
    {
        num % 10 == check[idx] ? idx-- : op++;
        num /= 10;
    }
    return idx < 0 ? op : INT_MAX;
}

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ll num;
        cin >> num;

        int ans = INT_MAX;
        for (int x : {0, 25, 50, 75}) ans = min(ans, solve(num, x));
        cout << ans << endl;
    }

    return 0;
}