// Solution - 01
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int idx = 0;
        for (int num : nums)
        {
            if (num != val) nums[idx++] = num;
        }
        return idx;
    }
};





// Solution - 02
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int l = 0, r = 0;
        while (r < nums.size())
        {
            if (nums[r] != val) nums[l++] = nums[r];
            r++;
        }
        return l;
    }
};





// Solution - 02 - Modified
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int l = 0, r = 0;
        int size = nums.size();
        while (r < nums.size())
        {
            while (r < size && nums[r] == val) r++;
            if (r == size) break;
            nums[l++] = nums[r++];
        }
        return l;
    }
};