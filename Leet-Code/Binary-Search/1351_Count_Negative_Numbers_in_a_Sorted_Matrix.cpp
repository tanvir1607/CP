class Solution {
private:
    int firstNegative(vector<int> &vec) {
        int l = 0;
        int r = vec.size() - 1;
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] >= 0) l = mid + 1;
            else r = mid - 1, ans = mid;
        }
        return ans;
    }

public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        int col = grid[0].size();
        for (auto row : grid) {
            int idx = firstNegative(row);
            idx != -1 ? ans += col - idx : ans;
        }
        return ans;
    }
};