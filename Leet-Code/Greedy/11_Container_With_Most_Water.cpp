class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        long long ans = 0;
        while (l <= r)
        {
            long long area = min(height[l], height[r]) * (r - l) * 1LL;
            ans = max(area, ans);
            height[l] < height[r] ? l++ : r--;
        }
        return ans;
    }
};