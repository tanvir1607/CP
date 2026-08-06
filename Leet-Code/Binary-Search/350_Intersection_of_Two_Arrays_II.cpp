class Solution {
private: 
    int binary(vector<int> &vec, int target, int idx) {
        int l = idx;
        int r = vec.size() - 1;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] < target) l = mid + 1;
            else if (vec[mid] > target) r = mid - 1;
            else ans = mid, r = mid - 1;
        }
        return ans;
    }

public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int idx = 0;
        for (int x : nums1) {
            int pos = binary(nums2, x, idx);
            if (pos != -1) ans.push_back(x), idx = pos + 1;
        }
        return ans;
    }
};
