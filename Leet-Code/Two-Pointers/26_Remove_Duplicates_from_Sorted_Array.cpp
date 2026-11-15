// Solution - 01
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int l = 0, r = 0;
        while (r < nums.size())
        {
            if (nums[l] != nums[r])
            {
                l++;
                nums[l] = nums[r];
            }
            r++;
        }
        return l + 1;
    }
};






// Solution - 01 - Modified
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int l = 0, r = 0;
        int size = nums.size();
        while (r < size)
        {
            while (r < size && nums[l] == nums[r]) r++;
            if (r == size) break;
            l++;
            nums[l] = nums[r];
            r++;
        }
        return l + 1;
    }
};