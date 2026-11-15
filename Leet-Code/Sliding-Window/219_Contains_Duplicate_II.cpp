// Solution - 01 - Got TLE
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] && (j - i) <= k) return true;
            }
        }
        return false;
    }
};





// Solution - 02
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        set<int> Set;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > k) Set.erase(nums[i - k - 1]);
            if (Set.count(nums[i])) return true;
            Set.insert(nums[i]);
        }
        return false;
    }
};