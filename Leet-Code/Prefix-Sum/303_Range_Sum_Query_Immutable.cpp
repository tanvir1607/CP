class NumArray {
private:
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        int size = nums.size();
        prefix.resize(size + 1, 0);
        for (int i = 0; i < size; i++) prefix[i + 1] = prefix[i] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }
};