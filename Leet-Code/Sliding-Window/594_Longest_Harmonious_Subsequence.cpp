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
            if (nums[r] - nums[l] > 1)
            {
                l++;
                continue;
            }
            if (nums[r] - nums[l] == 1) ans = max(r - l + 1, ans);
            r++;
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
        int ans = 0;
        while (r < nums.size())
        {
            while (nums[r] - nums[l] > 1) l++;
            if (nums[r] - nums[l] == 1) ans = max(r - l + 1, ans);
            r++;
        }
        return ans;
    }
};



