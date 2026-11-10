// Solution - 01
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0, r = 0;
        while (r < nums.size()) 
        {
            while (r < nums.size() && nums[l] == nums[r]) r++;
            if (r == nums.size()) break;
            l++;
            nums[l] = nums[r];
        }
        return l + 1;
    }
};





// Solution - 02
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0;
        for (int num : nums)
        {
            if (idx == 0 || nums[idx - 1] < num)
            {
                nums[idx] = num;
                idx++;
            }
        }
        return idx;
    }
};
