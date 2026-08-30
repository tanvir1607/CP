class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> Set1(nums1.begin(), nums1.end());
        set<int> Set2(nums2.begin(), nums2.end());
        vector<int> ans;
        for (auto x : Set1) {
            if (Set2.count(x)) ans.push_back(x);
        }
        return ans;
    }
};