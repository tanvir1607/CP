class Solution {
public:
    int upper(vector<int> &vec, int target, int start)
    {
        int l = start, r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] > target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        vector<int> starts;
        for (auto p : intervals) starts.push_back(p[0]);
        
        int ans = 0;
        for (int i = 0; i < starts.size(); i++)
        {
            int idx = upper(starts, intervals[i][1], i + 1);
            ans += idx - i - 1;
        }
        return ans;
    }
};