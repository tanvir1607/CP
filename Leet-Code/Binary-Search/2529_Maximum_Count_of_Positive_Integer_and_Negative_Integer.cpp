// Solution - 01
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntNeg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int cntPos = nums.end() - lower_bound(nums.begin(),  nums.end(), 1);
        return max(cntPos, cntNeg);
    }
};





// Solution - 02
