// Solution - 02
class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int l = 0, r = 0;
        int ans = 0;
        while (r < s.size())
        {
            if (r - l + 1 == 3)
            {
                if (s[l] != s[l + 1] && s[l + 1] != s[l + 2] && s[l] != s[l + 2]) ans++;
                l++;
            }
            r++;
        }
        return ans;
    }
};





// Solution - 02
class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int l = 0, r = 0;
        int freq[26] = {0};
        int ans = 0, distinct = 0;
        while (r < s.size())
        {
            int idx = s[r] - 'a';
            if (freq[idx] == 0) distinct++;
            freq[idx]++;

            if (r - l + 1 == 3)
            {
                if (distinct == 3) ans++;
                int leftIdx = s[l] - 'a';
                freq[leftIdx]--;
                if (freq[leftIdx] == 0) distinct--;
                l++;
            }
            r++;
        }
        return ans;
    }
};