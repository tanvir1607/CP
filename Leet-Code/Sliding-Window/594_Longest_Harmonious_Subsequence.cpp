// Solution - 01
class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0;
        int ans = 0;
        while (r < nums.size())
        {
            if (nums[r] - nums[l] <= 1)
            {
                if (nums[r] - nums[l] == 1) ans = max(r - l + 1, ans);
                r++;
            }
            else l++;
        }    
        return ans;
    }
};





// Solution - 01 - Modified
class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0;
        int ans = 0, size = nums.size();
        while (r < size)
        {
            while (r < size && nums[r] - nums[l] <= 1) r++;
            if (nums[r - 1] - nums[l] == 1) ans = max(r - l, ans);
            while (l < r && r < size && nums[r] - nums[l] > 1) l++;
        }    
        return ans;
    }
};