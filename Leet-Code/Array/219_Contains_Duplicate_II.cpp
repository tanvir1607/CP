class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> Map;
        for (int i = 0; i < nums.size(); i++) {
            if (Map.count(nums[i]) && abs(i - Map[nums[i]]) <= k) {
                return true;
            }
            Map[nums[i]] = i;
        }
        return false;
    }
};