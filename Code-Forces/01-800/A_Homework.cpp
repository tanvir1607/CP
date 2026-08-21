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
        int size1, size2;
        string a, b, c;
        cin >> size1 >> a >> size2 >> b >> c;

        for (int i = 0; i < size2; i++)
        {
            if (c[i] == 'V') a.insert(a.begin(), b[i]);
            else a += b[i];
        }
        cout << a << endl;
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
        int size1, size2;
        string a, b, c;
        cin >> size1 >> a >> size2 >> b >> c;

        for (int i = 0; i < size2; i++)
        {
            if (c[i] == 'V') a = b[i] + a;
            else a += b[i];
        }
        cout << a << endl;
    }

    return 0;
}