class Solution {
private:
    int upper(vector<int> vec, int target)
    {
        int l = 0, r = vec.size() - 1;
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
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        sort(nums.begin(), nums.end());
        
        int size = nums.size();
        vector<int> pre(size), ans;
        pre[0] = nums[0];
        for (int i = 1; i < size; i++) pre[i] = pre[i - 1] + nums[i];
        for(int x : queries) ans.push_back(upper(pre, x));
        return ans;
    }
};