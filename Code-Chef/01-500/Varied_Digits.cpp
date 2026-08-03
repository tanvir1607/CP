// Solution - 01
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int num;
    cin >> num;
    cout << (num % 10 != num / 10 ? "Yes" : "No") << endl;

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

    int num;
    cin >> num;;
    cout << (num % 11 ? "Yes" : "No") << endl;

    return 0;
}