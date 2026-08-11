// Solution - 01
class Solution {
private:
    bool binary(vector<int> &vec, int target, int idx) {
        int l = 0;
        int r = vec.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] < target) l = mid + 1;
            else if (vec[mid] > target) r = mid - 1;
            else {
                if (mid != idx) return true;
                if (mid -1 >= 0 && vec[mid - 1] == target) return true;
                if (mid + 1 < vec.size() && vec[mid + 1] == target) return true;
                return false;
            }
        }
        return false;
    }

public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; i++) {
            if (binary(arr, 2 * arr[i], i)) return true;
        }
        return false;
    }
};





// Solution - 02
class Solution {
private:
    bool binary(vector<int> &vec, int target, int idx) {
        int l = idx;
        int r = vec.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] < target) l = mid + 1;
            else if (vec[mid] > target) r = mid - 1;
            else return true;
        }
        return false;
    }

public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] >= 0 && binary(arr, 2*arr[i], i + 1)) return true;
            else if (arr[i] % 2 == 0 && binary(arr, arr[i] / 2, i + 1)) return true;
        }
        return false;
    }
};