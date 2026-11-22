// Solution - 01 - Brute Force - Got TLE
class Solution {
private:
    bool isPalindrome(string str)
    {
        int l = 0, r = str.size() - 1;
        while (l < r)
        {
            if (str[l] != str[r]) return false;
            l++, r--;
        }
        return true;
    }

public:
    string longestPalindrome(string s) 
    {
        int size = s.size();
        string ans = "";
        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size; j++)
            {
                string temp = s.substr(i, j - i + 1);
                if (isPalindrome(temp) && temp.size() > ans.size()) ans = temp;
            }
        }
        return ans;
    }
};





// Solution - 02 - Expand Around Center
class Solution {
private:
    int start = 0;
    int maxLen = 1;

    void expand(string &s, int l, int r)
    {
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            int len = r - l + 1;
            if (len > maxLen) start = l, maxLen = len;
            l--, r++;
        }
    }

public:
    string longestPalindrome(string s) 
    {
        int size = s.size();
        for (int i = 0; i < size; i++) 
        {
            expand(s, i, i);      // Odd Length
            expand(s, i, i + 1);  // Even Length
        }
        return s.substr(start, maxLen);
    }
};