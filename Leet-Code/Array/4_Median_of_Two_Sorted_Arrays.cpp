class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        for (int x : nums1) merged.push_back(x);
        for (int x : nums2) merged.push_back(x);
        sort(merged.begin(), merged.end());

        int size = merged.size();
        if (size & 1)  return (double)merged[size / 2];
        else return (merged[size / 2 - 1] + merged[size / 2]) / 2.0;
    }
};