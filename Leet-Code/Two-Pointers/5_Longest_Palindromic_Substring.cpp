// Solution - 01 - Brute Force - Got TLE
class Solution {
private:
    bool isPalindrome(string str)
    {
        int l = 0, r = str.size() - 1;
        while (l < r)
        {
            if (str[l] != str[r]) return false;
            l++;
            r--;
        }
        return true;
    }

public:
    string longestPalindrome(string s) 
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
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
    void expand(string s, int l, int r, int &start, int &maxLen)
    {
        while (l >= 0 && r < s.size() && s[l] == s[r])
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

public:
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