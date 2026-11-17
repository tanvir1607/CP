class Solution {
public:
    int arrangeCoins(int n) 
    {
        int l = 1, r = n;
        int ans = 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            long long coins = mid * (mid + 1) / 2;
            if (coins <= n) l = mid + 1, ans = mid;
            else r = mid - 1;
        }
        return ans;
    }
};