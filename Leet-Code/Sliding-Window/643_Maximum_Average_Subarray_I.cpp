// Solution - 01
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int sum = 0;
        for (int i = 0; i < k; i++)  sum += nums[i];
        int maxSum = sum;
        for (int i = k; i < nums.size(); i++)
        {
            sum += nums[i] - nums[i - k];
            maxSum = max(sum, maxSum);
        }
        return (double) maxSum / k;
    }
};





// Solution - 02
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int sum = 0, maxSum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (i >= k - 1)
            {
                maxSum = max(sum, maxSum);
                sum -= nums[i - k + 1];
            }
        }
        return (double) maxSum / k;
    }
};