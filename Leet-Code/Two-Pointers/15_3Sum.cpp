// Solution - 01 - TLE
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> ans;
        int size = nums.size();
        for (int i = 0; i < size - 2; i++) 
        {
            for (int j = i + 1; j < size - 1; j++) 
            {
                for (int k = j + 1; k < size; k++) 
                {
                    if (nums[i] + nums[j] + nums[k] == 0) 
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};





// Solution - 02
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < size - 2; i++)
        {
            while (i > 0 && i < size && nums[i - 1] == nums[i]) i++;
            if (i >= size - 2) break;
            
            int l = i + 1;
            int r = size - 1;
            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l - 1] == nums[l]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                }
                else if (sum < 0) l++;
                else r--;
            }
        }
        return ans;
    }
};