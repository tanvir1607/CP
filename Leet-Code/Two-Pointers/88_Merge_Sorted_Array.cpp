// Solution - 01
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n  - 1;
        while (j >= 0)
        {
            if (i >= 0 && nums1[i] >= nums2[j]) 
            {
                nums1[i + j + 1] = nums1[i];
                i--;
            }
            else 
            {
                nums1[i + j + 1] = nums2[j];
                j--;
            }
        }
    }
};





// Solution - 01 - Modified
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n  - 1;
        int k = m + n - 1;
        while (j >= 0)
        {
            if (i >= 0 && nums1[i] >= nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }
    }
};





// Solution - 02
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) nums1[m + i] = nums2[i];
        for (int i = 0; i < m + n - 1; i++)
        {
            for (int j = i + 1; j < m + n; j++)
            {
                if (nums1[i] > nums1[j]) swap(nums1[i], nums1[j]);
            }
        }
    }
};