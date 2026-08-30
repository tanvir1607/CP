class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0;
        while (g.size() && s.size()) {
            if (g[0] <= s[0]) {
                ans++;
                g.erase(g.begin());
                s.erase(s.begin());
            } else {
                s.erase(s.begin());
            }
        }
        return ans;
    }
};