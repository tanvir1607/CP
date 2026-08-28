// Solution - 01
class Solution {
private:
    int binary(vector<int> &vec, int target, int idx) {
        int l = idx;
        int r = vec.size() - 1;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] > target) r = mid - 1;
            else if (vec[mid] < target) l = mid + 1;
            else ans = mid, r = mid - 1;
        }
        return ans;
    }

public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ansArr;
        for (int i = 0; i < nums.size(); i++) {
            int idx = binary(nums, target, i);
            if (idx == -1) return ansArr;
            else ansArr.push_back(idx), i = idx;
        }
        return ansArr;
    }
};





// Solution - 02
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        vector<int> ans;
        for (int i = first; i < last; i++) ans.push_back(i);
        return ans;
    }
};





// Solution - 03
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

    int upper(vector<int> &vec, int target) {
        int l = 0;
        int r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] > target) ans = mid, r = mid - 1;
            else l = mid + 1;
        }
        return ans;
    }

public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int first = lower(nums, target);
        int last = upper(nums, target);
        vector<int> ans;
        for (int i = first; i < last; i++) ans.push_back(i);
        return ans;
    }
};