class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int rightCnt = size - i;
            if (nums[i] >= rightCnt && (i == 0 || nums[i - 1] < rightCnt)) 
                return rightCnt;
        }
        return -1;
    }
};