// Solution - 01
class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size(); i++)
        {
            int cnt = nums.end() - lower_bound(nums.begin(), nums.end(), i);
            if (i == cnt) return i;
        }   
        return -1; 
    }
};





// Solution - 02
class Solution {
private:
    int lower(vector<int> vec, int target)
    {
        int l = 0, r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] >= target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

public:
    int specialArray(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size(); i++)
        {
            int cnt = nums.size() - lower(nums, i);
            if (i == cnt) return i;
        }   
        return -1; 
    }
};