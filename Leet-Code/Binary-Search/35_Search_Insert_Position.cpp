// Solution - 01
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
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
            if (vec[mid] >= target) r = mid - 1, ans = mid;
            else l = mid + 1;;
        }
        return ans;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower(nums, target);
    }
};