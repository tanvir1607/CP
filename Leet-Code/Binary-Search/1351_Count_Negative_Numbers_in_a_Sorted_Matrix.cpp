class Solution {
private:
    int binary(vector<int> vec)
    {
        int l = 0, r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] < 0) l = mid + 1;
            else r = mid - 1, ans = mid;
        }
        return ans;
    }

public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int ans = 0;
        for (auto vec : grid)
        {
            sort(vec.begin(), vec.end());
            ans += binary(vec);
        }    
        return ans;
    }
};