// Solution - 01
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == need) return {i, j};
            }
        }
        return {};
    }
};





// Solution - 02
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> Map;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (Map.count(need)) return {Map[need], i};
            else Map[nums[i]] = i;
        }
        return {};
    }
};