class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums.size();
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if (mid == nums[mid]) l = mid + 1;
            else r = mid - 1, ans = mid;
        }
        return ans;
    }
};