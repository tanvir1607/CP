class Solution {
private:
    int lower(vector<int> &vec, int target) {
        int l = 0;
        int r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] >= target) r = mid - 1, ans = mid;
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
            if (vec[mid] > target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for (int x : arr1) {
            int left = lower(arr2, x - d);
            int right = upper(arr2, x + d);
            ans += left == right;
        }
        return ans;
    }
};