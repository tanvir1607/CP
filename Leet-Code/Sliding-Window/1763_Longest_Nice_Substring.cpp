class Solution {
private:
    bool isNice(string s, int l, int r)
    {
        int lower[26] = {0}, upper[26] = {0};
        for (int i = l; i <= r; i++)
            islower(s[i]) ? lower[s[i] - 'a'] = 1 : upper[s[i] - 'A'] = 1;

        for (int i = 0; i < 26; i++)
        {
            if (lower[i] != upper[i]) return false;
        }
        return true;
    }

public:
    string longestNiceSubstring(string s) 
    {
        int size = s.size();
        for (int len = size; len >= 2; len--)
        {
            for (int l = 0; l <= size - len; l++)
            {
                int r = l + len - 1;
                if (isNice(s, l, r)) return s.substr(l, len);
            }
        }
        return "";
    }
};