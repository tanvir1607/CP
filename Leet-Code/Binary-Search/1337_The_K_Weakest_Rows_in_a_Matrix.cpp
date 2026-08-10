class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> rows;
        for (int i = 0; i < mat.size(); i++) {
            int cnt1 = count(mat[i].begin(), mat[i].end(), 1);
            rows.push_back({cnt1, i});
        }
        sort(rows.begin(), rows.end());
        vector<int> ans;
        for (int i = 0; i < k; i++) ans.push_back(rows[i].second);
        return ans;
    }
};