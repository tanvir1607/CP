// Solution - 02
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};





// Solution - 02
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq;
        for (int x : nums) freq[x]++;
        for (auto [key, val] : freq) {
            if (val > nums.size() / 2) return key;
        }
        return 0;
    }
};