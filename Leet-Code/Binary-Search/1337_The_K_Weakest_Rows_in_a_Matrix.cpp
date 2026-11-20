class Solution {
private:
    int binary(vector<int> vec)
    {
        int l = 0, r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] == 1) l = mid + 1;
            else r = mid - 1, ans = mid;
        }
        return ans;
    }

public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<pair<int, int>> vec;
        for (int i = 0; i < mat.size(); i++)
        {
            int soldiers = binary(mat[i]);
            vec.push_back({soldiers, i});
        }
        sort(vec.begin(), vec.end());
        vector<int> ans;
        for (auto p : vec) ans.push_back(p.second);
        ans.resize(k);
        return ans;
    }
};