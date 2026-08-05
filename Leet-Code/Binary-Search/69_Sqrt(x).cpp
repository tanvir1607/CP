class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        long long l = 1; 
        long long r = x / 2;
        long long ans = 1;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (mid * mid > x) r = mid - 1;
            else l = mid + 1, ans = mid;
        }
        return ans;
    }
};