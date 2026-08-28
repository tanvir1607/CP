class Solution {
private:
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
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> prefix(nums.size()), ans;
        prefix[0] = nums[0];
        for (int i = 1; i < prefix.size(); i++) prefix[i] = prefix[i - 1] + nums[i];
        for (int x : queries) ans.push_back(upper(prefix, x));
        return ans;
    }
};