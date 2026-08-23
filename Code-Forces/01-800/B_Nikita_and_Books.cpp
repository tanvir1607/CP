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
        cin >> size;
        vector<ll> vec(size);
        for (ll &x : vec) cin >> x;
        
        ll sum = 0;
        bool flag = true;
        for (int i = 0; i < size; i++)
        {
            sum += vec[i];
            ll n = i + 1;
            if (n * (n + 1) / 2 > sum) 
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
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
        vector<ll> vec(size);
        for (ll &x : vec) cin >> x;
        
        bool flag = true;
        for (int i = 0; i < size - 1; i++)
        {
            vec[i + 1] += vec[i] - (i + 1);
            vec[i] = i + 1;
            if (vec[i] >= vec[i + 1])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}