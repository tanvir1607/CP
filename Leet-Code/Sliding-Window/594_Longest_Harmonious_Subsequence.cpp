// Solution - 01
class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0;
        int maxLen = 0;
        while (r < nums.size())
        {
            if (nums[r] - nums[l] <= 1)
            {
                if (nums[r] - nums[l] == 1) maxLen = max(r - l + 1, maxLen);
                r++;
            }
            else l++;
        }    
        return maxLen;
    }
};





// Solution - 01 - Modified
class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0;
        int size = nums.size();
        int maxLen = 0;
        while (r < nums.size())
        {
            while (r < size && nums[r] - nums[l] <= 1) r++;
            if (nums[r - 1] - nums[l] == 1) maxLen = max(r - l, maxLen);
            while (l < r && r < size && nums[r] - nums[l] > 1) l++;
        }    
        return maxLen;
    }
};