// Solution - 01 - Brute Force - Got TLE
class Solution {
public:
    bool isPalindrome(string s) 
    {
        int l = 0, r = s.size() - 1;
        while (l < r) 
        {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) 
    {
        int size = s.size();
        string ans = "";
        for (int i = 0; i < size; i++) 
        {
            for (int j = i; j < size; j++) 
            {
                string temp = s.substr(i, j - i + 1);
                if (isPalindrome(temp) && temp.size() > ans.size()) 
                    ans = temp;
            }
        }
        return ans;
    }
};





// Solution - 02 - Expand Around Center
class Solution {
public:
    void expand(string &s, int l, int r, int &start, int &maxLen)
    {
        int n = s.size();
        while (l >= 0 && r < n && s[l] == s[r])
        {
            if (r - l + 1 > maxLen)
            {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }
    }

    string longestPalindrome(string s) 
    {
        int size = s.size();
        int start = 0;
        int maxLen = 1;
        for (int i = 0; i < size; i++)
        {
            expand(s, i, i, start, maxLen);
            expand(s, i, i + 1, start, maxLen);
        }
        return s.substr(start, maxLen);
    }
};