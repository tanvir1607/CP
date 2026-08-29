class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int start = i;
            while (i + 1 < size && nums[i] + 1 == nums[i + 1]) i++;
            int end = i;
            if (start == end) {
                ans.push_back(to_string(nums[start]));
            } else {
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
            }
        }
        return ans;
    }
};