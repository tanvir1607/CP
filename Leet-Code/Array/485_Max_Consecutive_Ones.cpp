// Solution - 01
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = 0;
        for (int num : nums) {
            if (num == 1) count++;
            else count = 0;
            ans = max(count, ans);
        }
        return ans;
    }
};





// Solution - 02
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int l = 0;
        int r = 0;
        while (r < nums.size()) {
            while (r < nums.size() && nums[r] == 1) r++;
            ans = max(r - l, ans);
            r++;
            l = r;
        }
        return ans;
    }
};





// Solution - 03
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int l = 0;
        int r = 0;
        while (r < nums.size()) {
            if (nums[r] == 1) r++;
            else {
                ans = max(r - l, ans);
                r++;
                l = r;
            }
        }
        ans = max(r - l, ans);
        return ans;
    }
};