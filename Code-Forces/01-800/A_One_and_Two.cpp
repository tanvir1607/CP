// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int main()
// {
//     optimize();

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int size;
//         cin >> size;
//         vector<int> vec(size);
//         for (int &x : vec) cin >> x;

//         int cnt2 = count(vec.begin(), vec.end(), 2);
//         if (cnt2 & 1) cout << -1 << endl;
//         else
//         {
//             int count = 0;
//             for (int i = 0; i < size; i++)
//             {
//                 if (vec[i] == 2) count++;
//                 if (count == cnt2 / 2)
//                 {
//                     cout << i + 1 << endl;
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }



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

        vector<int> idx;
        for (int i = 0; i < size; i++)
        {
            if (vec[i] == 2) idx.push_back(i);
        }
        if (idx.size() & 1) cout << -1 << endl;
        else if (idx.size() == 0) cout << 1 << endl;
        else cout << idx[(idx.size() / 2) - 1] + 1 << endl;
    }

    return 0;
}