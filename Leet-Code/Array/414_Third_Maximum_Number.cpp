class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        map<int, bool> Map;
        for (int x : nums) {
            Map[x] = true;
            if (Map.size() == 3) return x;
        }
        return *max_element(nums.begin(), nums.end());
    }
};