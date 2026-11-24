// Solution - 01
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int size;
    cin >> size;
    vector<int> vec(size);
    for (int &x : vec) cin >> x;

    sort(vec.begin(), vec.end());
    for (int i = 1; i <= size; i++)
    {
        if (vec[i] != i)
        {
            cout << i << endl;
            break;
        }
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

    int size;
    cin >> size;
    vector<int> vec(size - 1);
    for (int &x : vec) cin >> x;
    
    set<int> Set(vec.begin(), vec.end());
    for (int i = 1; i <= size; i++)
    {
        if (!Set.count(i))      // if (Set.find(i) == Set.end()) 
        {
            cout << i << endl;
            break;
        }
    }

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

    int size;
    cin >> size;
    vector<int> vec(size - 1);
    for (int &x : vec) cin >> x;
    
    map<int, bool> Map;
    for (int x : vec) Map[x] = true;
    for (int i = 1; i <= size; i++)
    {
        if (!Map[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}