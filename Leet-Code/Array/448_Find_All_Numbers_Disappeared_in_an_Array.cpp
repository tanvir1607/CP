class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> Set(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = 1; i <= nums.size(); i++) {
            if (!Set.count(i)) ans.push_back(i);
        }
        return ans;
    }
};