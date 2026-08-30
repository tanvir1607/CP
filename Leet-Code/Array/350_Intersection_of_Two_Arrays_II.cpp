class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> Map;
        for (int x : nums1) Map[x]++;
        for (int x : nums2) {
            if (Map[x]) {
                ans.push_back(x);
                Map[x]--;
            }
        }
        return ans;
    }
};