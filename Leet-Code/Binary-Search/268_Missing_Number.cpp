class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        int ans = nums.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] != mid) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }
};