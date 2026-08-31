// Solution - 01
class Solution {
private:
    vector<int> left, right;
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        left.resize(size, 0);
        right.resize(size, 0);
        for (int i = 1; i < size; i++) left[i] = left[i - 1] + nums[i - 1];
        for (int i = size - 2; i >= 0; i--) right[i] = right[i + 1] + nums[i + 1];
        for (int i = 0; i < size; i++)
        {
            if (left[i] == right[i]) return i;
        }
        return -1;
    }
};





// Solution - 02
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size(); i++) {
            right -= nums[i];
            if (left == right) return i;
            left += nums[i];
        }
        return -1;
    }
};