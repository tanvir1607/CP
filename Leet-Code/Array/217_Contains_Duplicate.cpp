class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> Set(nums.begin(), nums.end());
        return nums.size() != Set.size();
    }
};