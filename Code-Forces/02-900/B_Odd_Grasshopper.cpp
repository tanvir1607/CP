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
        ll pos, n;
        cin >> pos >> n;

        ll jump;
        if (n % 4 == 1) jump = n;
        else if (n % 4 == 2) jump = -1;
        else if (n % 4 == 3) jump = - n - 1;
        else jump = 0;
        cout << (pos % 2 ? pos + jump : pos - jump) << endl;
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
        ll pos, n;
        cin >> pos >> n;

        ll jump;
        if (n % 4 == 1) jump = -n;
        else if (n % 4 == 2) jump = 1;
        else if (n % 4 == 3) jump = n + 1;
        else jump = 0;
        cout << (pos % 2 == 0 ? pos + jump : pos - jump) << endl;
    }

    return 0;
}