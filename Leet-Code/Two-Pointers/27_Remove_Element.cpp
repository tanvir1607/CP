// Solution - 01
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = 0;
        while (r < nums.size())
        {
            if (nums[r] != val)
            {
                nums[l] = nums[r];
                l++;
            }
            r++;
        }
        return l;
    }
};





// Solution - 01 - Modified
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = 0;
        while (r < nums.size())
        {
            while (r < nums.size() && nums[r] == val) r++;
            if (r == nums.size()) break;
            nums[l] = nums[r];
            l++;
            r++;
        }
        return l;
    }
};





// Solution - 02
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        for (int num : nums) 
        {
            if (num != val)
            {
                nums[idx] = num;
                idx++;
            }
        }
        return idx;
    }
};





// Solution - 03
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};