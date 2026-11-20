class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int l = 0, r = arr.size() - 1;
        int ans = arr.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int missing = arr[mid] - (mid + 1);
            if (missing >= k) r = mid - 1, ans = mid;
            else l = mid + 1;
        }   
        return ans + k; 
    }
};