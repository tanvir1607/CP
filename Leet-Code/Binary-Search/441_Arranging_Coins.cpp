// Solution - 01
class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1;
        int r = n;
        int ans = 1;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            long long coins = mid * (mid + 1) / 2;
            if (coins <= n) l = mid + 1, ans = mid;
            else r = mid - 1;
        }
        return ans;
    }
};





// Solution - 02
class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1;
        int r = n;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            long long coins = mid * (mid + 1) / 2;
            if (coins < n) l = mid + 1;
            else if (coins > n) r = mid - 1;
            else return mid;
        }
        return r;
    }
};