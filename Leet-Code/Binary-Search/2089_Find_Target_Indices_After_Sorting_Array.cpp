// Solution - 01
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();  
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        vector<int> ans;
        for (int i = lb; i < ub; i++) ans.push_back(i);
        return ans;  
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

    int upper(vector<int> vec, int target)
    {
        int l = 0, r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] > target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
        int lb = lower(nums, target);  
        int ub = upper(nums, target);
        vector<int> ans;
        for (int i = lb; i < ub; i++) ans.push_back(i);
        return ans;  
    }
};