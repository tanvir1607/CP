class Solution {
private:
    bool binary(vector<int> vec, int target, int idx)
    {
        int l = idx, r = vec.size() - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (vec[mid] < target) l = mid + 1;
            else if (vec[mid] > target) r = mid - 1;
            else return true;
        }
        return false;
    }

public:
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            if (binary(arr, 2*arr[i], i + 1)) return true;
            else if (arr[i] % 2 == 0 && binary(arr, arr[i] / 2, i + 1)) return true;
        }
        return false;
    }
};