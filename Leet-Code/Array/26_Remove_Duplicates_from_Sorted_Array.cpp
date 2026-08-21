class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0;
        for (int num : nums) {
            if (idx == 0 || nums[idx - 1] < num) {
                nums[idx] = num;
                idx++;
            }
        }
        return idx;
    }
};