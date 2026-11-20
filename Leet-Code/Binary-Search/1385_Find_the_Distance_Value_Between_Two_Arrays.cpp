class Solution {
private:
    int lower(vector<int> vec, int target)
    {
        int l = 0, r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] >= target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

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
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for (int num : arr1)
        {
            int lb = lower(arr2, num - d);
            int ub = upper(arr2, num + d);
            ans += lb == ub;
        }
        return ans;
    }
};





// Solution - 02
class Solution {
private:
    int lower(vector<int> vec, int target)
    {
        int l = 0, r = vec.size() - 1;
        int ans = vec.size();
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] >= target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return ans;
    }

public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for (int num : arr1)
        {
            int idx = lower(arr2, num - d);
            if (idx == arr2.size() || arr2[idx] > num + d) ans++;
        }
        return ans;
    }
};