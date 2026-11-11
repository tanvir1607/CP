// Solution - 01
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            if (!isalnum(s[l]))
            {
                l++;
                continue;
            }
            if (!isalnum(s[r]))
            {
                r--;
                continue;
            }

            if (tolower(s[l]) != tolower(s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};





// Solution - 02
class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char ch : s) isalnum(ch) && (str += tolower(ch), true);
        string rev = str;
        reverse(rev.begin(), rev.end());
        return str == rev;
    }
};