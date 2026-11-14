// Solution - 01
class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] == 2 * arr[j] || 2 * arr[i] == arr[j]) 
                    return true;
            }

        }
        return false;
    }
};





// Solution - 02
class Solution {
private:
    bool binary(vector<int> &vec, int target, int idx) 
    {
        int l = idx;
        int r = vec.size() - 1;
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
        for (int i = 0; i < arr.size() - 1; i++) 
        {
            if (binary(arr, 2 * arr[i], i + 1)) 
                return true;
            else if (arr[i] % 2 == 0 && binary(arr, arr[i] / 2, i + 1))   
                return true;
        }
        return false;
    }
};