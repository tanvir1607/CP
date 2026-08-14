// Solution - 01
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

const int SIZE = 10;
int arr[SIZE][SIZE] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        vector<string> grid(SIZE);
        for (string &str : grid) cin >> str;

        int ans = 0;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
                ans += grid[i][j] == 'X' ? arr[i][j] : 0;
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

const int SIZE = 10;

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        vector<string> grid(SIZE);
        for (string &str : grid) cin >> str;

        int ans = 0;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (grid[i][j] == 'X')
                {
                    int rowScore = min(i + 1, 10 - i);
                    int colScore = min(j + 1, 10 - j);
                    ans += min(rowScore, colScore);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}