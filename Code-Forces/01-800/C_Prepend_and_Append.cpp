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
        string str;
        cin >> size >> str;

        int ans = size, l = 0, r = size - 1;
        while (l < r)
        {
            if (str[l] != str[r]) ans -= 2, l++, r--;
            else break;
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
        int size;
        cin >> size;
        deque<char> dq(size);
        for (char &ch : dq) cin >> ch;

        while (dq.size())
        {
            if (dq.front() != dq.back()) dq.pop_front(), dq.pop_back();
            else break;
        }
        cout << dq.size() << endl;
    }
}