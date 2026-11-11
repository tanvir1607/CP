class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for (int x : nums) {
            if (x != 0) ans.push_back(x);
        }
        ans.resize(nums.size(), 0);
        nums = ans;
    }
};