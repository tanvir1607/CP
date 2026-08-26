// Solution - 01
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) return i;
        }
        return nums.size();
    }
};





// Solution - 02
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) return i;
        }
        return nums.size();
    }
};