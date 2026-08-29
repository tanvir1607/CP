// Solution - 01
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, idx = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[idx], nums[i]);
                idx++;
            }
        }
    }
};





// Solution - 02
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