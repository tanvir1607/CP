// Solution - 01 - Brute Force - Got TLE
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size && j <= i + k; j++)
            {
                if (nums[i] == nums[j]) return true;
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
        int size = nums.size();
        unordered_set<int> Set;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > k) Set.erase(nums[i - k  - 1]);
            if (Set.count(nums[i])) return true;
            Set.insert(nums[i]);
        }
        return false;
    }
};