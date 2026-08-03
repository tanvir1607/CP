// Solution - 01
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

bool isPalindrome(vector<int> vec, int val)
{
    for (int &x : vec) x <= val ? x++ : x--;
    for (int i = 0, j = vec.size() - 1; i <= j; i++, j--)
        if (vec[i] != vec[j]) return false;
    return true;
}

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

        int val = -1;
        for (int i = 0, j = size - 1; i < j; i++, j--)
        {
            int a = vec[i];
            int b = vec[j];

            if (a > b) swap(a, b);

            if (a == b) continue;
            else if (b - a == 2) val = a;
            else  val = -2;
            break;
        }
        if (val == -1) cout << "Yes" << endl;
        else if (val == -2) cout << "No" << endl;
        else cout << (isPalindrome(vec, val) || isPalindrome(vec, val + 1) ? "Yes" : "No") << endl;
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

        bool flag = true;
        int L = INT_MIN;
        int R = INT_MAX;
        for (int i = 0; i < size / 2; i++) 
        {
            int a = vec[i];
            int b = vec[size - i - 1];
            if (a > b) swap(a, b);

            if (a == b) continue;
            else if (b - a == 2) 
            {
                L = max(L, a);
                R = min(R, b);
            }
            else
            {
                flag = false;
                break;
            }
        }
        cout << ((flag && L < R) ? "Yes" : "No") << endl;
    }

    return 0;
}