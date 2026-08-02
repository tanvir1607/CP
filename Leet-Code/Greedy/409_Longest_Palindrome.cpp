class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) freq[ch]++;

        int ans = 0;
        bool oddFound = false;
        for (auto [key, val] : freq)
            ans += val & 1 ? oddFound = true, val - 1 : val;
        oddFound ? ans++ : ans;
        return ans;
    }
};