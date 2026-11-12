class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < size; i++)
        {
            int l = i;
            int r = i;
            while (l >= 0 && r < size && s[l] == s[r])
            {
                if (r - l + 1 > maxLen)
                {
                    start = l;
                    maxLen = r - l + 1;
                }
                l--;
                r++;
            }

            l = i;
            r = i + 1;
            while (l >= 0 && r < size && s[l] == s[r])
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
        return s.substr(start, maxLen);
    }
};











class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string temp = s.substr(i, j - i + 1);

                if (temp.size() > ans.size() && isPalindrome(temp)) {
                    ans = temp;
                }
            }
        }

        return ans;
    }
};












class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        bool dp[1001][1001] = {};

        int start = 0, maxLen = 1;

        for (int i = 0; i < n; i++)
            dp[i][i] = true;

        for (int len = 2; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;

                if (s[i] == s[j]) {
                    if (len == 2 || dp[i + 1][j - 1]) {
                        dp[i][j] = true;

                        if (len > maxLen) {
                            start = i;
                            maxLen = len;
                        }
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};