class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int need = target - nums[i];
            int lb = lower_bound(nums.begin() + i + 1, nums.end(), need) - nums.begin();
            ans += lb - i - 1;
        }
        return ans;
    }
};