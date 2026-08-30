// Solution - 01
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntNeg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int cntPos = nums.end() - lower_bound(nums.begin(),  nums.end(), 1);
        return max(cntPos, cntNeg);
    }
};





// Solution - 02
class Solution {
private:
    int lower(vector<int> &vec, int target) {
        int l = 0;
        int r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] >= target) ans = mid, r = mid - 1;
            else l = mid + 1;
        }
        return ans;
    }

public:
    int maximumCount(vector<int>& nums) {
        int cntNeg = lower(nums, 0);
        int cntPos = nums.size() - lower(nums, 1);
        return max(cntPos, cntNeg);
    }
};