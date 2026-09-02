class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                bool increasing = true;
                int prev = -1;
                for (int i = 0; i < n; i++) {
                    if (l <= i && i <= r) continue;
                    if (prev != -1 && prev >= nums[i]) {
                        increasing = false;
                        break;
                    }
                    prev = nums[i];
                }
                if (increasing) ans++;
            }
        }
        return ans;
    }
};