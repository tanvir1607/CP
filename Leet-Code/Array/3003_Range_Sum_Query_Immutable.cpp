// Solution - 01 - 0 based prefix sum
class NumArray {
private:
    vector<int> prefix;

public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0] = nums[0];
        for (int i = 1; i < prefix.size(); i++) prefix[i] = prefix[i - 1] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return left == 0 ? prefix[right] : prefix[right] - prefix[left - 1];
    }
};





// Solution - 02 - 1 based prefix sum
class NumArray {
private:
    vector<int> prefix;

public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size() + 1, 0);
        for (int i = 1; i < prefix.size(); i++) prefix[i] = prefix[i - 1] + nums[i - 1];
    }
    
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};