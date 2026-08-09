// Solution - 01
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) nums[idx++] = nums[i];
        }
        return idx;
    }
};





// Solution - 02
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};