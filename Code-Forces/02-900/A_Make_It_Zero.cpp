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
        
        if (size & 1) cout << 4 << endl
                            << 1 << " " << size - 1 << endl 
                            << 1 << " " << size - 1 << endl
                            << size - 1 << " " << size << endl
                            << size - 1 << " " << size << endl;
        else cout << 2 << endl
                    << 1 << " " << size << endl
                    << 1 << " " << size << endl;
    }

    return 0;
}
 