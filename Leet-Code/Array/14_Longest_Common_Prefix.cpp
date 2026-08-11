// Solution - 01
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < ans.size() && j < strs[i].size() && strs[i][j] == ans[j]) j++;
            ans = ans.substr(0, j);
        }
        return ans;
    }
};





// Solution - 02
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for (string str : strs) {
            while (str.find(ans) != 0) ans = ans.substr(0, ans.length() - 1);
        }
        return ans;
    }
};