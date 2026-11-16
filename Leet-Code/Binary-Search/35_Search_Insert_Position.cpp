// Solution - 01
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};





// Solution - 02 - Lower Function Implemented
class Solution {
private:
    int lower(vector<int> nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        int ans = nums.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

public:
    int searchInsert(vector<int>& nums, int target) 
    {
        return lower(nums, target);
    }
};





// Solution - 03 - Lower Function Implemented
class Solution {
private:
    int lower(vector<int> nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] < target) l = mid + 1, ans = mid + 1;
            else r = mid - 1;
        }
        return ans;
    }

public:
    int searchInsert(vector<int>& nums, int target) 
    {
        return lower(nums, target);
    }
};