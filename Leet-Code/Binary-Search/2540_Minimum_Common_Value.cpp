// Solution - 01
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for (int x : nums1) {
            if (binary_search(nums2.begin(), nums2.end(), x)) return x;
        }
        return -1;
    }
};





// Solution - 02
class Solution {
private:
    bool binary(vector<int> &vec, int target) {
        int l = 0;
        int r = vec.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] > target) r = mid - 1;
            else if (vec[mid] < target) l = mid + 1;
            else return true;
        }
        return false;
    }

public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for (int x : nums1) {
            if (binary(nums2, x)) return x;
        }
        return -1;
    }
};