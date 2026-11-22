class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int size = code.size();
        



        int size = code.size();
        vector<int> ans(size, 0);

        if (k == 0) return ans;

        int sum = 0;
        if (k > 0)
        {
            for (int j = 1; j <= k; j++) sum += code[j % n];
            ans[0] = sum;
            for (int i = 1; i < n; i++)
            {
                sum -= code[i % n]; 
                sum += code[(i + k) % n];
                ans[i] = sum;
            }
        }
        else
        {
            int m = -k;
            for (int j = 1; j <= m; j++) sum += code[(n - j) % n];
            ans[0] = sum;
            for (int i = 1; i < n; i++)
            {
                sum -= code[(i - 1 - m + n) % n];
                sum += code[(i - 1) % n];
                ans[i] = sum;
            }
        }
        return ans;
    }
};