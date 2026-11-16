class Solution {
private:
    bool binary(vector<int> vec, int target)
    {
        int l = 0, r = vec.size() - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] < target) l = mid + 1;
            else if (vec[mid] > target) r = mid - 1;
            else return true;
        }
        return false;
    }

public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums2.begin(), nums2.end());
        set<int> Set;
        for (int num : nums1) 
            binary(nums2, num) && (Set.insert(num), true);
        return vector<int> (Set.begin(), Set.end());
    }
};