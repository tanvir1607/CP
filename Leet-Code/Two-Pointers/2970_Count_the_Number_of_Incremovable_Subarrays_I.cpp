// Solution - 01
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) 
    {
        int ans = 0;
        int size = nums.size();
        for (int l = 0; l < size; l++)
        {
            for (int r = l; r < size; r++)
            {
                int prev = -1;
                bool isIncreasing = true;
                for (int i = 0; i < size && isIncreasing; i++)
                {
                    if (i >= l && i <= r) continue;
                    if (prev != -1 && prev >= nums[i]) isIncreasing = false;
                    prev = nums[i];
                }
                if (isIncreasing) ans++;
            }
        }
        return ans;
    }
};





// Solution - 02
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) 
    {
        int ans = 0;
        int size = nums.size();
        vector<bool> prefix(size, true);
        vector<bool> suffix(size, true);

        for (int i = 1; i < size; i++)
            prefix[i] = prefix[i - 1] && nums[i - 1] < nums[i];

        for (int i = size - 2; i >= 0; i--)
            suffix[i] = suffix[i + 1] && nums[i] < nums[i + 1];

        for (int l = 0; l < size; l++)
        {
            for (int r = l; r < size; r++)
            {
                bool left = (l == 0 || prefix[l - 1]);
                bool right = (r == size - 1 || suffix[r + 1]);
                bool join = (l == 0 || r == size - 1 || nums[l - 1] < nums[r + 1]);
                if (left && right && join) ans++;
            }
        }

        return ans;
    }
};
