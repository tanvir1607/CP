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
        int size, k;
        string str;
        cin >> size >> k >> str;

        int last = -k;
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            if (str[i] == '1' && i - last >= k) ans++;
            if (str[i] == '1') last = i;
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
        int size, k;
        string str;
        cin >> size >> k >> str;

        int l = -k;
        int ans = 0;
        for (int r = 0; r < size; r++)
        {
            if (str[r] == '1' && r - l >= k) ans++;
            if (str[r] == '1') l = r;
        }
        cout << ans << endl;
    }

    return 0;
}